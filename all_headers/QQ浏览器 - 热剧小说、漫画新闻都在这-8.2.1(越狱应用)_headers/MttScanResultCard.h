//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MttScanResultCard : NSObject
{
    _Bool _specialSplit;
    _Bool _need_add_panle_menu;
    float _star;
    int _need_splite_line;
    long long _ui_id;
    NSString *_item_id;
    NSString *_title;
    NSString *_more_text;
    NSString *_more_url;
    NSString *_star_icon;
    NSString *_ua_statkey;
    NSMutableArray *_item_list;
    double _orginX;
}

@property(nonatomic) _Bool need_add_panle_menu; // @synthesize need_add_panle_menu=_need_add_panle_menu;
@property(nonatomic) int need_splite_line; // @synthesize need_splite_line=_need_splite_line;
@property(nonatomic) double orginX; // @synthesize orginX=_orginX;
@property(retain, nonatomic) NSMutableArray *item_list; // @synthesize item_list=_item_list;
@property(retain, nonatomic) NSString *ua_statkey; // @synthesize ua_statkey=_ua_statkey;
@property(retain, nonatomic) NSString *star_icon; // @synthesize star_icon=_star_icon;
@property(nonatomic) float star; // @synthesize star=_star;
@property(nonatomic) _Bool specialSplit; // @synthesize specialSplit=_specialSplit;
@property(retain, nonatomic) NSString *more_url; // @synthesize more_url=_more_url;
@property(retain, nonatomic) NSString *more_text; // @synthesize more_text=_more_text;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(nonatomic) long long ui_id; // @synthesize ui_id=_ui_id;
- (void).cxx_destruct;

@end

