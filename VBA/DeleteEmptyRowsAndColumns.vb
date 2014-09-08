Sub DeleteEmptyRowsAndColumns()
    LastRow = ActiveSheet.UsedRange.row - 1 + _
    ActiveSheet.UsedRange.Rows.Count
    Application.ScreenUpdating = False
    For r = LastRow To 1 Step -1
        If Application.CountA(Rows(r)) = 0 Then Rows(r).Delete
    Next r
     
    LastColumn = ActiveSheet.UsedRange.Column - 1 + _
    ActiveSheet.UsedRange.Columns.Count
    Application.ScreenUpdating = False
    For c = LastColumn To 1 Step -1
        If Application.CountA(Columns(c)) = 0 Then Columns(c).Delete
    Next c
End Sub
