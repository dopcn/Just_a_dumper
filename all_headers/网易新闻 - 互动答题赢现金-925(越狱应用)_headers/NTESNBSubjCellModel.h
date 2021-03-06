//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NTESNBSQCellModel.h"

@class NSArray, NSAttributedString, NSDictionary, NSMutableArray, NSString;

@interface NTESNBSubjCellModel : NTESNBSQCellModel
{
    _Bool _concerned;
    _Bool _loading;
    _Bool _compact;
    _Bool _notify;
    _Bool _hideFollow;
    NSString *_subjectId;
    NSString *_expertId;
    NSString *_name;
    NSString *_category;
    long long _concernCount;
    long long _talkCount;
    long long _questionCount;
    NSDictionary *_relatedQA;
    NSAttributedString *_relatedExpertDesc;
    NSString *_relatedExpertId;
    double _relatedQAHeight;
    NSString *_digest;
    NSAttributedString *_digestAttrib;
    double _digestHeight;
    NSArray *_pics;
    double _picturesHeight;
    NSArray *_texts;
    NSMutableArray *_textsIcons;
    NSMutableArray *_textsContents;
    NSMutableArray *_textsHeights;
    NSAttributedString *_concernCountString;
    NSAttributedString *_talkCountString;
    NSAttributedString *_qestCountString;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool hideFollow; // @synthesize hideFollow=_hideFollow;
@property(nonatomic) _Bool notify; // @synthesize notify=_notify;
@property(nonatomic) _Bool compact; // @synthesize compact=_compact;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSAttributedString *qestCountString; // @synthesize qestCountString=_qestCountString;
@property(copy, nonatomic) NSAttributedString *talkCountString; // @synthesize talkCountString=_talkCountString;
@property(copy, nonatomic) NSAttributedString *concernCountString; // @synthesize concernCountString=_concernCountString;
@property(retain, nonatomic) NSMutableArray *textsHeights; // @synthesize textsHeights=_textsHeights;
@property(retain, nonatomic) NSMutableArray *textsContents; // @synthesize textsContents=_textsContents;
@property(retain, nonatomic) NSMutableArray *textsIcons; // @synthesize textsIcons=_textsIcons;
@property(copy, nonatomic) NSArray *texts; // @synthesize texts=_texts;
@property(nonatomic) double picturesHeight; // @synthesize picturesHeight=_picturesHeight;
@property(copy, nonatomic) NSArray *pics; // @synthesize pics=_pics;
@property(nonatomic) double digestHeight; // @synthesize digestHeight=_digestHeight;
@property(copy, nonatomic) NSAttributedString *digestAttrib; // @synthesize digestAttrib=_digestAttrib;
@property(copy, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(nonatomic) double relatedQAHeight; // @synthesize relatedQAHeight=_relatedQAHeight;
@property(copy, nonatomic) NSString *relatedExpertId; // @synthesize relatedExpertId=_relatedExpertId;
@property(copy, nonatomic) NSAttributedString *relatedExpertDesc; // @synthesize relatedExpertDesc=_relatedExpertDesc;
@property(copy, nonatomic) NSDictionary *relatedQA; // @synthesize relatedQA=_relatedQA;
@property(nonatomic) _Bool concerned; // @synthesize concerned=_concerned;
@property(nonatomic) long long questionCount; // @synthesize questionCount=_questionCount;
@property(nonatomic) long long talkCount; // @synthesize talkCount=_talkCount;
@property(nonatomic) long long concernCount; // @synthesize concernCount=_concernCount;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *expertId; // @synthesize expertId=_expertId;
@property(copy, nonatomic) NSString *subjectId; // @synthesize subjectId=_subjectId;
- (void).cxx_destruct;
- (double)textWidth;
- (double)contentBoardWidth;
- (double)rightContentXEdge;
- (double)leftContentXEdge;
- (id)uniqueId;
- (id)initWithData:(id)arg1 compact:(_Bool)arg2;
- (id)initWithData:(id)arg1;

@end

