//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface VSOperateExtraData : JSONModel
{
    NSString<Optional> *_status;
    NSString<Optional> *_coupon_info;
    NSString<Optional> *_coupon_image;
    NSString<Optional> *_left_button;
    NSString<Optional> *_mid_button;
    NSString<Optional> *_right_button;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *right_button; // @synthesize right_button=_right_button;
@property(copy, nonatomic) NSString<Optional> *mid_button; // @synthesize mid_button=_mid_button;
@property(copy, nonatomic) NSString<Optional> *left_button; // @synthesize left_button=_left_button;
@property(copy, nonatomic) NSString<Optional> *coupon_image; // @synthesize coupon_image=_coupon_image;
@property(copy, nonatomic) NSString<Optional> *coupon_info; // @synthesize coupon_info=_coupon_info;
@property(copy, nonatomic) NSString<Optional> *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

