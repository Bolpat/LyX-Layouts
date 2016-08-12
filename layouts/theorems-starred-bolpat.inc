# Original Author : David L. Johnson <dlj0@lehigh.edu>
# Probably broken by Jean-Marc Lasgouttes <Jean-Marc.Lasgouttes@inria.fr>
# modified and modularized by Emmanuel GUREGHIAN <gureghia@boston.bertin.fr>
# Tinkered with Sep. '07 by Paul Rubin <rubin@msu.edu>
# Modularized Jan 08 by Richard Heck <rgheck@comcast.net>

# The starred environnements defined are :
# - Theorem
# - Corollary
# - Lemma
# - Proposition
# - Conjecture
# - Definition
# - Example
# - Problem
# - Exercise
# - Solution
# - Remark
# - Claim
# - Proof

Format 60

OutlinerName thm "Definitions & Theorems"

Style Theorem*
	Category              Reasoning
	LatexType             Environment
	Margin                First_Dynamic
	LatexName             thm*
	LabelType             Static
	LabelString           "Theorem."
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
	Font
	  Shape               Up
	  Size                Normal
	EndFont
	LabelFont
	  Shape               SmallCaps
	  Series              Up
	EndFont
	Preamble
	  \newtheoremstyle{scthm*}
	    {\topsep}                                               % ABOVESPACE
	    {\topsep}                                               % BELOWSPACE
	    {\normalfont}                                           % BODYFONT
	    {0pt}                                                   % INDENT (empty value is the same as 0pt)
	    {\normalfont}                                           % HEADFONT (don't use \scshape here)
	    {:}                                                     % HEADPUNCT
	    {1em plus 1pt minus 1pt}                                % HEADSPACE (rubber space; may vary about 1pt)
	    {\textsc{\thmname{#1}}\thmnumber{ #2}\thmnote{, #3}}    % CUSTOM-HEAD-SPEC
      \theoremstyle{scthm*}
	  \newtheorem*{thm*}{\protect\theoremname}
	EndPreamble
	LangPreamble
	  \providecommand{\theoremname}{_(Theorem)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\theoremname}{_(Theorem)}}
	EndBabelPreamble
	Requires              amsthm
End


Style Corollary*
	CopyStyle             Theorem*
	DependsOn             Theorem*
	LatexName             cor*
	LabelString           "Corollary."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{cor*}{\protect\corollaryname}
	EndPreamble
	LangPreamble
	  \providecommand{\corollaryname}{_(Corollary)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\corollaryname}{_(Corollary)}}
	EndBabelPreamble
End


Style Lemma*
	CopyStyle             Theorem*
	DependsOn             Theorem*
	LatexName             lem*
	LabelString           "Lemma."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{lem*}{\protect\lemmaname}
	EndPreamble
	LangPreamble
	  \providecommand{\lemmaname}{_(Lemma)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\lemmaname}{_(Lemma)}}
	EndBabelPreamble
End


Style Proposition*
	CopyStyle             Theorem*
	DependsOn             Theorem*
	LatexName             prop*
	LabelString           "Proposition."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{prop*}{\protect\propositionname}
	EndPreamble
	LangPreamble
	  \providecommand{\propositionname}{_(Proposition)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\propositionname}{_(Proposition)}}
	EndBabelPreamble
End


Style Conjecture*
	CopyStyle             Theorem*
	DependsOn             Theorem*
	LatexName             conjecture*
	LabelString           "Conjecture."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{conjecture*}{\protect\conjecturename}
	EndPreamble
	LangPreamble
	  \providecommand{\conjecturename}{_(Conjecture)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\conjecturename}{_(Conjecture)}}
	EndBabelPreamble
End


Style Fact*
	CopyStyle             Theorem*
	DependsOn             Theorem*
	LatexName             fact*
	LabelString           "Fact."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{fact*}{\protect\factname}
	EndPreamble
	LangPreamble
	  \providecommand{\factname}{_(Fact)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\factname}{_(Fact)}}
	EndBabelPreamble
End


Style Definition*
	CopyStyle             Theorem*
	DependsOn             Theorem*
	LatexName             defn*
#LabelType             Static
	LabelString           "Definition."
	Font
	  Shape               Up
	  Size                Normal
	EndFont
	LabelFont
	  Shape               SmallCaps
	  Series              Up
	EndFont
	Preamble
	 \theoremstyle{scthm*}
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
	DependsOn             Definition*
	LatexName             example*
	LabelString           "Example."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{example*}{\protect\examplename}
	EndPreamble
	LangPreamble
	  \providecommand{\examplename}{_(Example)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\examplename}{_(Example)}}
	EndBabelPreamble
End


Style Problem*
	CopyStyle             Definition*
	DependsOn             Definition*
	LatexName             problem*
	LabelString           "Problem."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{problem*}{\protect\problemname}
	EndPreamble
	LangPreamble
	  \providecommand{\problemname}{_(Problem)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\problemname}{_(Problem)}}
	EndBabelPreamble
End


Style Exercise*
	CopyStyle             Definition*
	DependsOn             Definition*
	LatexName             xca*
	LabelString           "Exercise."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{xca*}{\protect\exercisename}
	EndPreamble
	LangPreamble
	  \providecommand{\exercisename}{_(Exercise)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\exercisename}{_(Exercise)}}
	EndBabelPreamble
End


Style Solution*
	CopyStyle             Definition*
	DependsOn             Definition*
	LatexName             sol*
	LabelString           "Solution."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{sol*}{\protect\solutionname}
	EndPreamble
	LangPreamble
	  \providecommand{\solutionname}{_(Solution)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\solutionname}{_(Solution)}}
	EndBabelPreamble
End


Style Remark*
	CopyStyle             Theorem*
	DependsOn             Theorem*
	LatexName             rem*
	LabelString           "Remark."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{rem*}{\protect\remarkname}
	EndPreamble
	LangPreamble
	  \providecommand{\remarkname}{_(Remark)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\remarkname}{_(Remark)}}
	EndBabelPreamble
End


Style Claim*
	CopyStyle             Remark*
	DependsOn             Remark*
	LatexName             claim*
	LabelString           "Claim."
	Preamble
	  \theoremstyle{scthm*}
	  \newtheorem*{claim*}{\protect\claimname}
	EndPreamble
	LangPreamble
	  \providecommand{\claimname}{_(Claim)}
	EndLangPreamble
	BabelPreamble
	  \addto\captions$$lang{\renewcommand{\claimname}{_(Claim)}}
	EndBabelPreamble
End

