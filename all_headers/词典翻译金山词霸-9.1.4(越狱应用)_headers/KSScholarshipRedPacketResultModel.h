//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface KSScholarshipRedPacketResultModel : NSObject
{
    NSString *_bonus;
    NSString *_headImage;
    NSString *_extraBonus;
    NSString *_successCount;
    NSString *_shareContent;
    NSString *_shareImage;
    NSString *_shareTitle;
    NSString *_shareUrl;
    NSMutableArray *_others;
    NSString *_contentid;
    NSString *_donecount;
}

+ (id)mj_objectClassInArray;
@property(copy, nonatomic) NSString *donecount; // @synthesize donecount=_donecount;
@property(copy, nonatomic) NSString *contentid; // @synthesize contentid=_contentid;
@property(retain, nonatomic) NSMutableArray *others; // @synthesize others=_others;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *successCount; // @synthesize successCount=_successCount;
@property(copy, nonatomic) NSString *extraBonus; // @synthesize extraBonus=_extraBonus;
@property(copy, nonatomic) NSString *headImage; // @synthesize headImage=_headImage;
@property(copy, nonatomic) NSString *bonus; // @synthesize bonus=_bonus;
- (void).cxx_destruct;

@end

