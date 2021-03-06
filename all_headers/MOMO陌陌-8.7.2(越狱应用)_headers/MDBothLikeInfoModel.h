//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDUserProfile, NSArray, NSString;

@interface MDBothLikeInfoModel : NSObject
{
    _Bool _isBothLike;
    _Bool _isSuperLikePair;
    _Bool _isAD;
    NSString *_title;
    NSString *_desc;
    NSString *_followGotoStr;
    MDUserProfile *_fromUpi;
    MDUserProfile *_toUpi;
    NSArray *_firstButtonClickLog;
    NSString *_firstButtonGoto;
    NSString *_secondButtonGoto;
    NSArray *_secondButtonClickLog;
}

+ (id)modelWithDic:(id)arg1;
@property(retain, nonatomic) NSArray *secondButtonClickLog; // @synthesize secondButtonClickLog=_secondButtonClickLog;
@property(retain, nonatomic) NSString *secondButtonGoto; // @synthesize secondButtonGoto=_secondButtonGoto;
@property(retain, nonatomic) NSString *firstButtonGoto; // @synthesize firstButtonGoto=_firstButtonGoto;
@property(retain, nonatomic) NSArray *firstButtonClickLog; // @synthesize firstButtonClickLog=_firstButtonClickLog;
@property(nonatomic) _Bool isAD; // @synthesize isAD=_isAD;
@property(nonatomic) _Bool isSuperLikePair; // @synthesize isSuperLikePair=_isSuperLikePair;
@property(retain, nonatomic) MDUserProfile *toUpi; // @synthesize toUpi=_toUpi;
@property(retain, nonatomic) MDUserProfile *fromUpi; // @synthesize fromUpi=_fromUpi;
@property(copy, nonatomic) NSString *followGotoStr; // @synthesize followGotoStr=_followGotoStr;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isBothLike; // @synthesize isBothLike=_isBothLike;
- (void).cxx_destruct;

@end

