//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NTESNBWendaAnswerCellModelProtocol-Protocol.h"

@class NSArray, NSString, NTESNBAnswerData;

@interface NTESNBWendaAnswerCellModel : NSObject <NTESNBWendaAnswerCellModelProtocol>
{
    _Bool _islargeImage;
    NSString *_avtarImageUrl;
    NSString *_certificationImg;
    NSString *_name;
    NSString *_titleLevel;
    NSString *_answer;
    long long _replyCount;
    long long _supportCount;
    NSArray *_imageList;
    NSString *_tid;
    NTESNBAnswerData *_answerData;
}

@property(retain, nonatomic) NTESNBAnswerData *answerData; // @synthesize answerData=_answerData;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) _Bool islargeImage; // @synthesize islargeImage=_islargeImage;
@property(copy, nonatomic) NSArray *imageList; // @synthesize imageList=_imageList;
@property(nonatomic) long long supportCount; // @synthesize supportCount=_supportCount;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(copy, nonatomic) NSString *answer; // @synthesize answer=_answer;
@property(copy, nonatomic) NSString *titleLevel; // @synthesize titleLevel=_titleLevel;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *certificationImg; // @synthesize certificationImg=_certificationImg;
@property(copy, nonatomic) NSString *avtarImageUrl; // @synthesize avtarImageUrl=_avtarImageUrl;
- (void).cxx_destruct;
- (void)setUpCellModel;
- (id)initWithAnswerData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

