//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGPublicDynamicBase.h"

@class NSString, NSURL;

@interface KGPublicDynamicSpecail : KGPublicDynamicBase
{
    NSString *_cover;
    long long _specialId;
    NSString *_specialName;
    long long _songCount;
}

@property(nonatomic) long long songCount; // @synthesize songCount=_songCount;
@property(copy, nonatomic) NSString *specialName; // @synthesize specialName=_specialName;
@property(nonatomic) long long specialId; // @synthesize specialId=_specialId;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *coverUrl;
- (id)init;

@end

