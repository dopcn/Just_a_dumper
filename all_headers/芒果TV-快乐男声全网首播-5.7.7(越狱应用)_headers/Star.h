//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface Star : NSObject <NSCoding>
{
    int _role;
    int _rank;
    long long _hots;
    long long _fans;
    long long _fansCount;
    NSString *_uid;
    NSString *_userName;
    NSString *_nickName;
    NSString *_photo;
    NSMutableArray *_tags;
    NSString *_video;
    NSString *_cover;
    NSString *_selected;
    NSString *_intr;
    NSString *_hotValue;
    NSMutableArray *_dynamicInfo;
}

@property(retain, nonatomic) NSMutableArray *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(copy, nonatomic) NSString *hotValue; // @synthesize hotValue=_hotValue;
@property(copy, nonatomic) NSString *intr; // @synthesize intr=_intr;
@property(copy, nonatomic) NSString *selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *video; // @synthesize video=_video;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(nonatomic) long long fans; // @synthesize fans=_fans;
@property(nonatomic) long long hots; // @synthesize hots=_hots;
@property(nonatomic) int rank; // @synthesize rank=_rank;
@property(nonatomic) int role; // @synthesize role=_role;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

