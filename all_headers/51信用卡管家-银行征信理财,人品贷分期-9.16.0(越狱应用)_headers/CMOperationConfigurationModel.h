//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CMOperationConfigurationModel : NSObject
{
    _Bool _highlighted;
    NSString *_id;
    long long _badge;
    NSArray *_imageUrls;
    NSString *_label;
    NSString *_routerUrl;
    NSString *_subTitle;
    NSString *_title;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *routerUrl; // @synthesize routerUrl=_routerUrl;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

