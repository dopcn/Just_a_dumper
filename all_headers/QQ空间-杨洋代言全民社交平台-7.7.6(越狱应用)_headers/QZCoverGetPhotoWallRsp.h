//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QZCoverGetPhotoWallRsp : NSObject
{
    _Bool iHasMore;
    int total_pic;
    NSArray *vecUrls;
    NSString *attachInfo;
}

@property(nonatomic) _Bool iHasMore; // @synthesize iHasMore;
@property(retain, nonatomic) NSString *attachInfo; // @synthesize attachInfo;
@property(nonatomic) int total_pic; // @synthesize total_pic;
@property(retain, nonatomic) NSArray *vecUrls; // @synthesize vecUrls;
- (void).cxx_destruct;

@end

