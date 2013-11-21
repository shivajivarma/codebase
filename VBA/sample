Function replaceText(rng As Range)
    Dim c, ns                   As String
    Dim underlined, aTagOpen    As Boolean
    
    underlined = False
    aTagOpen = False
        
        If rng.NumberFormat <> "General" Then
            rng.NumberFormat = "General"
            If rng.Font.Underline = xlUnderlineStyleSingle Then
                ns = "&lt;a&gt;$" & rng.Text & "&lt;/a&gt;"
            Else
                ns = "$" & rng.Text
            End If
        Else
            For i = 1 To Len(rng.Value) Step 1
                If rng.Characters(i, 1).Text <> vbCrLf Then
				
                    c = rng.Characters(i, 1).Text
                     If rng.Characters(i, 1).Text = "†" Then
                         c = "&#8224;"
                     ElseIf rng.Characters(i, 1).Text = "–" Then
                         c = "&#8211;"
                     ElseIf rng.Characters(i, 1).Text = "&" Then
                         c = "&amp;amp;"
                     End If
                     
                     If ((rng.Characters(i, 1).Font.Superscript) Or (rng.Characters(i, 1).Text = "®") Or (rng.Characters(i, 1).Text = "†")) Then
                         c = "&lt;sup&gt;" & c & "&lt;/sup&gt;"
                     End If
                     
                     If rng.Characters(i, 1).Font.Underline = xlUnderlineStyleSingle Then
                         If underlined Then
                             ns = ns & c
                         Else
                             ns = ns & "&lt;a&gt;" & c
                             aTagOpen = True
                         End If
                         underlined = True
                     Else
                         If underlined Then
                             ns = ns & "&lt;/a&gt;" & c
                             aTagOpen = False
                         Else
                             ns = ns & c
                         End If
                         underlined = False
                    End If
               End If
            Next i
         End If
         
    If aTagOpen Then
            ns = ns & "&lt;/a&gt;"
    End If

replaceText = ns

End Function

Public Sub sample()

Dim row As Long
Dim col As String

    On Error Resume Next

        Application.DisplayAlerts = False

            row = Application.InputBox _
             (Prompt:="Please enter row count.", _
                    Title:="Select Row Count", Type:=1) + 1

    On Error GoTo 0
    
    col = Mid(ActiveCell.Address, 2, 1)
    
    For i = 2 To row Step 1
        ActiveSheet.Range(col & i) = replaceText(ActiveSheet.Range(col & i))
    Next i
End Sub
