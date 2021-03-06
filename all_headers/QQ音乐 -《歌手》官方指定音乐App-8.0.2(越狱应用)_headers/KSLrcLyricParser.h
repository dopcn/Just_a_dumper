//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLyricParser.h"

#import "NSXMLParserDelegate-Protocol.h"

@class KSLyric, NSString;

@interface KSLrcLyricParser : KSLyricParser <NSXMLParserDelegate>
{
    int _currentTransType;
    KSLyric *_lyric;
    NSString *_lyricContent;
}

@property(nonatomic) int currentTransType; // @synthesize currentTransType=_currentTransType;
@property(retain, nonatomic) NSString *lyricContent; // @synthesize lyricContent=_lyricContent;
@property(retain, nonatomic) KSLyric *lyric; // @synthesize lyric=_lyric;
- (void).cxx_destruct;
- (void)addTipSentences;
- (id)divideSentence:(id)arg1 withDisplayWidth:(double)arg2 font:(id)arg3;
- (_Bool)updateMargin:(id)arg1 marginLine:(double)arg2 marginSentence:(double)arg3 marginSection:(double)arg4;
- (id)mix:(id)arg1 translateLyric:(id)arg2;
- (_Bool)format:(id)arg1 displayWidth:(double)arg2 font:(id)arg3;
- (void)getLrcLyricOriginalFormatContent:(id)arg1;
- (_Bool)_isDigitString:(id)arg1;
- (long long)parseTimeWithException:(id)arg1;
- (long long)parseTime:(id)arg1;
- (void)finishParseLrcSentence;
- (void)finishParseLrcSentenceUsingLyicLineElementMethod:(id)arg1;
- (id)parseLrcSentenceUsingLyicLineElementMethod:(id)arg1;
- (void)parseLrcSentence:(id)arg1;
- (int)lengthOfNewlineStr:(id)arg1;
- (id)newlineStr:(id)arg1;
- (void)parseLrcLyricContent:(id)arg1;
- (id)parseContent:(id)arg1 transType:(int)arg2;
- (id)parsePath:(id)arg1 transType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

