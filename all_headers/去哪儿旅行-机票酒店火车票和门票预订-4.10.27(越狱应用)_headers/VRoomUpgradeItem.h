//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface VRoomUpgradeItem : NSObject
{
    NSString *_enId;
    NSString *_topic;
    NSString *_nightDetailDesc;
    NSString *_desc;
    NSString *_dateStr;
    NSNumber *_addPrice;
    NSNumber *_roomSentPrice;
    NSNumber *_stock;
    NSNumber *_isSelected_1469067845482;
    NSArray *_imageUrl__Array__NSString;
}

@property(readonly, nonatomic, getter=imageUrl) NSArray *imageUrl__Array__NSString; // @synthesize imageUrl__Array__NSString=_imageUrl__Array__NSString;
@property(retain, nonatomic) NSNumber *isSelected_1469067845482; // @synthesize isSelected_1469067845482=_isSelected_1469067845482;
@property(retain, nonatomic) NSNumber *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) NSNumber *roomSentPrice; // @synthesize roomSentPrice=_roomSentPrice;
@property(retain, nonatomic) NSNumber *addPrice; // @synthesize addPrice=_addPrice;
@property(retain, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *nightDetailDesc; // @synthesize nightDetailDesc=_nightDetailDesc;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSString *enId; // @synthesize enId=_enId;
- (void).cxx_destruct;

@end

