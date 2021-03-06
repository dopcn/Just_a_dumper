//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MDFeedStyleADResource : NSObject
{
    _Bool _fad_favored;
    _Bool _fad_canFavor;
    _Bool _fad_shaddow;
    _Bool _fad_isPopupAD;
    _Bool _hasShowed;
    NSString *_fad_id;
    NSString *_fad_avatar;
    NSString *_fad_title;
    NSString *_fad_desc;
    NSArray *_fad_labels;
    NSString *_fad_content;
    NSArray *_fad_pics;
    NSArray *_fad_picExtends;
    NSString *_fad_info;
    double _fad_distance;
    NSString *_fad_avatarGoto;
    NSString *_fad_buttonGoto;
    NSString *_fad_contentGoto;
    NSArray *_fad_viewLogs;
    NSArray *_fad_clickLogs;
    NSString *_fad_inmobiNS;
    NSString *_fad_inmobiJS;
    long long _fad_favorCount;
    NSString *_fad_buttonColor;
    NSString *_fad_popupADUrl;
}

+ (id)dictionaryToFeedStyleADResource:(id)arg1;
@property(nonatomic) _Bool hasShowed; // @synthesize hasShowed=_hasShowed;
@property(retain, nonatomic) NSString *fad_popupADUrl; // @synthesize fad_popupADUrl=_fad_popupADUrl;
@property(nonatomic) _Bool fad_isPopupAD; // @synthesize fad_isPopupAD=_fad_isPopupAD;
@property(retain, nonatomic) NSString *fad_buttonColor; // @synthesize fad_buttonColor=_fad_buttonColor;
@property(nonatomic) _Bool fad_shaddow; // @synthesize fad_shaddow=_fad_shaddow;
@property(nonatomic) _Bool fad_canFavor; // @synthesize fad_canFavor=_fad_canFavor;
@property(nonatomic) _Bool fad_favored; // @synthesize fad_favored=_fad_favored;
@property(nonatomic) long long fad_favorCount; // @synthesize fad_favorCount=_fad_favorCount;
@property(retain, nonatomic) NSString *fad_inmobiJS; // @synthesize fad_inmobiJS=_fad_inmobiJS;
@property(retain, nonatomic) NSString *fad_inmobiNS; // @synthesize fad_inmobiNS=_fad_inmobiNS;
@property(retain, nonatomic) NSArray *fad_clickLogs; // @synthesize fad_clickLogs=_fad_clickLogs;
@property(retain, nonatomic) NSArray *fad_viewLogs; // @synthesize fad_viewLogs=_fad_viewLogs;
@property(retain, nonatomic) NSString *fad_contentGoto; // @synthesize fad_contentGoto=_fad_contentGoto;
@property(retain, nonatomic) NSString *fad_buttonGoto; // @synthesize fad_buttonGoto=_fad_buttonGoto;
@property(retain, nonatomic) NSString *fad_avatarGoto; // @synthesize fad_avatarGoto=_fad_avatarGoto;
@property(nonatomic) double fad_distance; // @synthesize fad_distance=_fad_distance;
@property(retain, nonatomic) NSString *fad_info; // @synthesize fad_info=_fad_info;
@property(retain, nonatomic) NSArray *fad_picExtends; // @synthesize fad_picExtends=_fad_picExtends;
@property(retain, nonatomic) NSArray *fad_pics; // @synthesize fad_pics=_fad_pics;
@property(retain, nonatomic) NSString *fad_content; // @synthesize fad_content=_fad_content;
@property(retain, nonatomic) NSArray *fad_labels; // @synthesize fad_labels=_fad_labels;
@property(retain, nonatomic) NSString *fad_desc; // @synthesize fad_desc=_fad_desc;
@property(retain, nonatomic) NSString *fad_title; // @synthesize fad_title=_fad_title;
@property(retain, nonatomic) NSString *fad_avatar; // @synthesize fad_avatar=_fad_avatar;
@property(retain, nonatomic) NSString *fad_id; // @synthesize fad_id=_fad_id;
- (void).cxx_destruct;
- (id)getDisplayLikeCount;
- (id)init;

@end

