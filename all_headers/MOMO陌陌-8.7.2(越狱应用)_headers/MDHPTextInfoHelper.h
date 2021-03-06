//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDTextParser, NSAttributedString, NSMutableArray;

@interface MDHPTextInfoHelper : NSObject
{
    MDTextParser *_parser;
    NSMutableArray *_labelQueues;
    NSMutableArray *_animaQueues;
    NSAttributedString *_targetAttributedString;
}

@property(retain, nonatomic) NSAttributedString *targetAttributedString; // @synthesize targetAttributedString=_targetAttributedString;
@property(retain, nonatomic) NSMutableArray *animaQueues; // @synthesize animaQueues=_animaQueues;
@property(retain, nonatomic) NSMutableArray *labelQueues; // @synthesize labelQueues=_labelQueues;
@property(retain, nonatomic) MDTextParser *parser; // @synthesize parser=_parser;
- (void).cxx_destruct;
- (id)animationQueue;
- (void)reusedQueue;
- (id)mixLabelFromQueue;
- (id)createMixLabel;
- (void)resetQueue;
- (id)attributedStringWithoutTailWhiteSpace:(id)arg1;
- (unsigned long long)textHeightWithFont:(id)arg1;
- (long long)maxLinesWithFont:(id)arg1 rect:(struct CGRect)arg2;
- (id)getLinesArrayOfStringInContentText:(id)arg1 font:(id)arg2 rect:(struct CGRect)arg3;
- (id)getLinesArray:(id)arg1 font:(id)arg2 rect:(struct CGRect)arg3;
- (long long)getLineCount:(id)arg1 font:(id)arg2 rect:(struct CGRect)arg3;
- (id)realTextFont:(id)arg1 rect:(struct CGRect)arg2;

@end

