//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FAMobileLiveGiftManager : NSObject
{
    long long _roomId;
    NSArray *_giftList;
}

+ (id)sharedFXGiftManager;
@property(retain, nonatomic) NSArray *giftList; // @synthesize giftList=_giftList;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;

@end

