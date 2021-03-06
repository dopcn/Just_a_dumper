//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSNumber, NSString;

@interface AIRSelectListingRoom : AIRModel
{
    NSString *_listingRoomID;
    NSArray *_beds;
    NSNumber *_layoutNumber;
    NSNumber *_layoutType;
    NSNumber *_roomNumber;
    NSNumber *_roomType;
    NSArray *_media;
    NSArray *_highlights;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
@property(readonly, copy, nonatomic) NSArray *highlights; // @synthesize highlights=_highlights;
@property(readonly, copy, nonatomic) NSArray *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSNumber *roomType; // @synthesize roomType=_roomType;
@property(readonly, copy, nonatomic) NSNumber *roomNumber; // @synthesize roomNumber=_roomNumber;
@property(readonly, copy, nonatomic) NSNumber *layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, copy, nonatomic) NSNumber *layoutNumber; // @synthesize layoutNumber=_layoutNumber;
@property(readonly, copy, nonatomic) NSArray *beds; // @synthesize beds=_beds;
@property(readonly, copy, nonatomic) NSString *listingRoomID; // @synthesize listingRoomID=_listingRoomID;
- (void).cxx_destruct;

@end

