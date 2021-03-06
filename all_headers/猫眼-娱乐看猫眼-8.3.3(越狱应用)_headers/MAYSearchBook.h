//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MAYStatusOperateProtocol-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface MAYSearchBook : MTLModel <MTLJSONSerializing, MAYStatusOperateProtocol>
{
    _Bool _wishStatus;
    int _wishNum;
    long long _bookId;
    NSString *_imageUrl;
    NSString *_mainTitle;
    NSString *_subTitle;
    NSString *_author;
    NSString *_press;
    NSString *_pubTime;
    NSString *_pubTimePress;
    double _score;
    long long _scoreNum;
}

+ (id)wishStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long scoreNum; // @synthesize scoreNum=_scoreNum;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) _Bool wishStatus; // @synthesize wishStatus=_wishStatus;
@property(nonatomic) int wishNum; // @synthesize wishNum=_wishNum;
@property(copy, nonatomic) NSString *pubTimePress; // @synthesize pubTimePress=_pubTimePress;
@property(copy, nonatomic) NSString *pubTime; // @synthesize pubTime=_pubTime;
@property(copy, nonatomic) NSString *press; // @synthesize press=_press;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long bookId; // @synthesize bookId=_bookId;
- (void).cxx_destruct;
- (long long)mediaId;
- (long long)mediaType;
- (id)statusNumPropertyKeyWithStatusType:(long long)arg1;
- (id)statusTypePropertyKeyWithStatusType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

