//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MttScanLocationItem, NSArray, NSMutableArray, NSString, UIImage;

@interface MttScanShareItem : NSObject
{
    _Bool _reShot;
    long long _type;
    UIImage *_image;
    NSString *_name;
    NSString *_desc;
    NSString *_baike;
    NSMutableArray *_shareImages;
    NSMutableArray *_shareViews;
    NSString *_share_circle_id;
    NSString *_share_post_id;
    NSArray *_shareImageIds;
    NSString *_share_text;
    NSString *_share_url;
    NSString *_share_activity_url;
    NSString *_wine_title;
    NSString *_wine_desc;
    MttScanLocationItem *_location;
    NSMutableArray *_templateArray;
}

@property(retain, nonatomic) NSMutableArray *templateArray; // @synthesize templateArray=_templateArray;
@property(retain, nonatomic) MttScanLocationItem *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *wine_desc; // @synthesize wine_desc=_wine_desc;
@property(retain, nonatomic) NSString *wine_title; // @synthesize wine_title=_wine_title;
@property(retain, nonatomic) NSString *share_activity_url; // @synthesize share_activity_url=_share_activity_url;
@property(retain, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSString *share_text; // @synthesize share_text=_share_text;
@property(retain, nonatomic) NSArray *shareImageIds; // @synthesize shareImageIds=_shareImageIds;
@property(retain, nonatomic) NSString *share_post_id; // @synthesize share_post_id=_share_post_id;
@property(retain, nonatomic) NSString *share_circle_id; // @synthesize share_circle_id=_share_circle_id;
@property(retain, nonatomic) NSMutableArray *shareViews; // @synthesize shareViews=_shareViews;
@property(retain, nonatomic) NSMutableArray *shareImages; // @synthesize shareImages=_shareImages;
@property(retain, nonatomic) NSString *baike; // @synthesize baike=_baike;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool reShot; // @synthesize reShot=_reShot;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

