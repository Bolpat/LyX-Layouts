# Sets the order of the main theorem environments
# Author: Richard Heck

Format 60

#Get the order right

Style Definition*
End

Style Lemma
End

Style Proof
End

Style Case
End

Style Proposition
End

Style Corollary*
End

Style Remark*
End

Style Theorem
End

Style Example*
End


# -------------------------------


Style Theorem
	Category              Reasoning
	Margin                First_Dynamic
	LatexType             Environment
	LatexName             thm
	NextNoIndent          1
	ResetArgs             1
	AddToToc              thm
	IsTocCaption          1
	Argument 1
		LabelString    "Additional Theorem Text"
		Tooltip        "Additional text appended to the theorem header"
		IsTocCaption      1
	EndArgument
	LabelSep              xx
	ParIndent             MMM
	ParSkip               0.4
	ItemSep               0.2
	TopSep                0.7
	BottomSep             0.7
	ParSep                0.3
	Align                 Block
	AlignPossible         Left
	LabelType             Static
	LabelCounter          theorem
	LabelString           "Theorem \thetheorem."
	Font
	  Shape               Up
	  Size                Normal
	EndFont
	LabelFont
	  Shape               SmallCaps
	  Series              Up
	EndFont
	Preamble
		\newtheoremstyle{scthm}
			{\topsep}
			{\topsep}
			{\normalfont}
			{}
			{\normalfont}
			{:}
			{1em plus 3pt minus 3pt}
			{\textsc{\thmname{#1}\thmnumber{ #2}}\thmnote{, #3}}
		\theoremstyle{scthm}
		\newtheorem{thm}{\protect\theoremname}
	EndPreamble
	LangPreamble
		\providecommand{\theoremname}{_(Theorem)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\theoremname}{_(Theorem)}}
	EndBabelPreamble
	Requires              amsthm
End


Style Lemma
	CopyStyle             Theorem
	DependsOn             Theorem
	LatexName             lem
	LabelString           "Lemma \thetheorem."
	Preamble
	  \theoremstyle{scthm}
	  \newtheorem{lem}[thm]{\protect\lemmaname}
	EndPreamble
	LangPreamble
	  \providecommand{\lemmaname}{_(Lemma)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\lemmaname}{_(Lemma)}}
	EndBabelPreamble
End


Style Proposition
	CopyStyle             Theorem
	DependsOn             Theorem
	LatexName             prop
	LabelString           "Proposition \thetheorem."
	Preamble
	  \theoremstyle{scthm}
	  \newtheorem{prop}[thm]{\protect\propositionname}
	EndPreamble
	LangPreamble
	  \providecommand{\propositionname}{_(Proposition)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\propositionname}{_(Proposition)}}
	EndBabelPreamble
End


Style Definition*
	CopyStyle             Theorem
	DependsOn             Theorem
	LatexName             defn*
#LabelType             Static
	LabelString           "Definition."
	Font
	  Shape               Up
	EndFont
	LabelFont
	  Shape               Up
	  Series              Bold
	EndFont
	Preamble
	 \theoremstyle{scthm}
	 \newtheorem*{defn*}{\protect\definitionname}
	EndPreamble
	LangPreamble
	  \providecommand{\definitionname}{_(Definition)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\definitionname}{_(Definition)}}
	EndBabelPreamble
End


Style Example*
	CopyStyle             Definition*
	LatexName             example*
	LabelString           "Example."
	Preamble
	  \theoremstyle{scthm}
	  \newtheorem*{example*}{\protect\examplename}
	EndPreamble
	LangPreamble
	  \providecommand{\examplename}{_(Example)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\examplename}{_(Example)}}
	EndBabelPreamble


EndStyle Remark*
	CopyStyle             Definition*
	LatexName             rem*
	LabelString           "Remark."
	Font
	  Shape               Up
	  Size                Normal
	EndFont
	LabelFont
	  Series              Medium
	  Shape               Italic
	EndFont
	Preamble
	  \theoremstyle{scthm}
	  \newtheorem*{rem*}{\protect\remarkname}
	EndPreamble
	LangPreamble
	  \providecommand{\remarkname}{_(Remark)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\remarkname}{_(Remark)}}
	EndBabelPreamble


EndStyle Corollary*
	CopyStyle             Definition*
	LatexName             cor*
	LabelString           "Corollary."
	Preamble
	  \theoremstyle{scthm}
	  \newtheorem*{cor*}{\protect\corollaryname}
	EndPreamble
	LangPreamble
	  \providecommand{\corollaryname}{_(Corollary)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\corollaryname}{_(Corollary)}}
	EndBabelPreamble
End


# ------------------------


Input theorems-proof-bolpat.inc
Input theorems-case-bolpat.inc