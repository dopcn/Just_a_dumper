//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface LocalMustExperienceItemModel : CTBusinessBean
{
    NSString *_imageUrl;
    NSString *_title;
    NSString *_priceDesc;
    NSString *_url;
    NSString *_expCountDesc;
}

@property(copy, nonatomic) NSString *expCountDesc; // @synthesize expCountDesc=_expCountDesc;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *priceDesc; // @synthesize priceDesc=_priceDesc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

