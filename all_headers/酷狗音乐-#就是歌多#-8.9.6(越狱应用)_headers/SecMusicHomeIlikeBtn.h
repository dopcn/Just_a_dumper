//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGThemeButton.h"

@class KGThemeLabel, KGThemeView, NSMutableDictionary, UIColor;

@interface SecMusicHomeIlikeBtn : KGThemeButton
{
    long long _btnIconType;
    UIColor *_translucentColor;
    _Bool _showSpotBetweenName;
    KGThemeButton *_upBtn;
    KGThemeLabel *_nameLabel;
    KGThemeLabel *_totalCountLabel;
    NSMutableDictionary *_dataDic;
    double _totalHeight;
    KGThemeView *_spotView;
}

@property(nonatomic) _Bool showSpotBetweenName; // @synthesize showSpotBetweenName=_showSpotBetweenName;
@property(retain, nonatomic) KGThemeView *spotView; // @synthesize spotView=_spotView;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(copy, nonatomic) NSMutableDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(retain, nonatomic) KGThemeLabel *totalCountLabel; // @synthesize totalCountLabel=_totalCountLabel;
@property(retain, nonatomic) KGThemeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) KGThemeButton *upBtn; // @synthesize upBtn=_upBtn;
- (void).cxx_destruct;
- (void)addSmallPicConstraints;
- (void)addBigPicConstraints;
- (void)setHighlighted:(_Bool)arg1;
- (void)createBasicIlikeBtn;
- (void)changeTheme:(id)arg1;
- (void)registerNoti;
- (id)initWithData:(id)arg1 WithBtnType:(long long)arg2;
- (void)dealloc;

@end

