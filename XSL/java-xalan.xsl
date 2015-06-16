 <?xml version="1.0" encoding="UTF-8"?>
    <xsl:stylesheet version="1.0" exclude-result-prefixes="xalan math"
                  xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                  xmlns:xalan="http://xml.apache.org/xalan"
                  xmlns:math="xalan://java.lang.Math">
       <xsl:template match="/">
           <xsl:value-of select="math:random()"/>
        </xsl:template>

    </xsl:stylesheet>
