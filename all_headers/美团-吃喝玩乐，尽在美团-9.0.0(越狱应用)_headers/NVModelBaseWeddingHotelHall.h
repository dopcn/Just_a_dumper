//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseWeddingHotelHall : NVBaseModel
{
    _Bool _showBookingButton;
    long long _uid;
    NSString *_img;
    NSString *_name;
    NSString *_table;
    NSString *_extra;
    NSString *_bookingButton;
    NSString *_linkUrl;
    NSString *_bookingDateUrl;
    NSString *_hallStyle;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *hallStyle; // @synthesize hallStyle=_hallStyle;
@property(copy, nonatomic) NSString *bookingDateUrl; // @synthesize bookingDateUrl=_bookingDateUrl;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(nonatomic) _Bool showBookingButton; // @synthesize showBookingButton=_showBookingButton;
@property(copy, nonatomic) NSString *bookingButton; // @synthesize bookingButton=_bookingButton;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *table; // @synthesize table=_table;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

