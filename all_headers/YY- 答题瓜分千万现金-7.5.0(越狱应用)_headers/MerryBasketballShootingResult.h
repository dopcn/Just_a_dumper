//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData;

@interface MerryBasketballShootingResult : NSObject
{
    unsigned long long _score;
    unsigned long long _combo;
    unsigned long long _rank;
    unsigned long long _defeat;
    NSData *_cover;
    NSArray *_fileList;
}

@property(copy, nonatomic) NSArray *fileList; // @synthesize fileList=_fileList;
@property(copy, nonatomic) NSData *cover; // @synthesize cover=_cover;
@property(nonatomic) unsigned long long defeat; // @synthesize defeat=_defeat;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(nonatomic) unsigned long long combo; // @synthesize combo=_combo;
@property(nonatomic) unsigned long long score; // @synthesize score=_score;
- (void).cxx_destruct;
- (id)init;

@end

