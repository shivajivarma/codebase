<?xml version='1.0'?>
<xsl:stylesheet version="1.0"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:java="http://xml.apache.org/xalan/java"
                xmlns:xalan="http://xml.apache.org/xalan"
                xmlns:counter="MyCounter"
                extension-element-prefixes="counter">

  <xalan:component prefix="counter" functions="response">
    <xalan:script lang="javascript">

      function response(name) {
        // Return a string.
        return "" + (name);
		
		copy();
		}
		
	   function copy() {
		var myObject, newpath;
        myObject = new ActiveXObject("Scripting.FileSystemObject");
        myObject.CopyFile ("C:\\pkgr.log", "C:\\test\\");
      }

    </xalan:script>
  </xalan:component>
  
<xsl:template match="/">
    <xsl:value-of select="counter:response('hello')"/> 
		<div>
			
    
    
    
			<div style="color: black; background-color: orange; padding: 20px;">
				<xsl:value-of select="/Properties/Datum[@Name='textToDisplay1']"/>
			</div>
			<div style="color: black; background-color: lime; padding: 20px;">
				<xsl:value-of select="/Properties/Datum[@Name='textToDisplay2']"/>
			</div>
		</div>
		
		<div>
			
			<table>
				<tr>
					<td>
						
						<img src="{/Data/Datum[@Name='My_Image']/Image/Path}" height="142" width="142">
							old 1
						</img>
						
						
						<img src="{//Data/Datum[@Name='My_Image']/Image/Path}" height="142" width="142">
							old 2
						</img>
						
						
						<img src="{/Data/Datum[@Name='My_Image']/Image/Path}" height="142" width="142">
							old 3
						</img>
						
		
					</td>
				</tr>
			</table>
					
			<table>
				<tr>
					<td>
						Body Content... 
						<p class="prepend-top-10px" >
							<xsl:value-of select="//Data/Datum[@ID='bodyContent']"/>
						</p>
					</td>
				</tr>
			</table>
				
		</div>
	</xsl:template>

	<xsl:template match="Image">
	<p>
		<img>
			<xsl:attribute name="src"><xsl:value-of select="Path" disable-output-escaping="yes"/></xsl:attribute>
			<xsl:attribute name="alt"><xsl:value-of select="Description" disable-output-escaping="yes"/></xsl:attribute>
			<xsl:attribute name="title"><xsl:value-of select="Description" disable-output-escaping="yes"/></xsl:attribute>
		</img>
	</p>		
	</xsl:template>
					
</xsl:stylesheet>
