//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UIImage;

@interface LFDropGiftResultModel : NSObject
{
    NSString *_roomID;
    NSNumber *_giftID;
    NSNumber *_giftType;
    UIImage *_giftFlowingImage;
    UIImage *_giftImage;
    NSString *_title;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *giftImage; // @synthesize giftImage=_giftImage;
@property(retain, nonatomic) UIImage *giftFlowingImage; // @synthesize giftFlowingImage=_giftFlowingImage;
@property(retain, nonatomic) NSNumber *giftType; // @synthesize giftType=_giftType;
@property(retain, nonatomic) NSNumber *giftID; // @synthesize giftID=_giftID;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;

@end

