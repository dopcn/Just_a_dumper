//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface KGRecentPlayMvModel : NSObject
{
    NSString *_addtime;
    NSString *_remark;
    unsigned long long _unionId;
    NSNumber *_videoId;
    NSString *_mvHash;
}

@property(copy, nonatomic) NSString *mvHash; // @synthesize mvHash=_mvHash;
@property(retain, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) unsigned long long unionId; // @synthesize unionId=_unionId;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *addtime; // @synthesize addtime=_addtime;
- (void).cxx_destruct;

@end

