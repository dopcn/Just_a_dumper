//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface KQNormalButton : UIButton
{
    long long _type;
    NSMutableDictionary *_titleColorDicM;
    NSMutableDictionary *_bgColorDicM;
    NSMutableDictionary *_borderColorDicM;
}

+ (id)buttonWithType:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *borderColorDicM; // @synthesize borderColorDicM=_borderColorDicM;
@property(retain, nonatomic) NSMutableDictionary *bgColorDicM; // @synthesize bgColorDicM=_bgColorDicM;
@property(retain, nonatomic) NSMutableDictionary *titleColorDicM; // @synthesize titleColorDicM=_titleColorDicM;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)notiKQChatRadioModeChange:(id)arg1;
- (void)onChangeTheme:(id)arg1;
- (void)changeBorderColor:(id)arg1;
- (void)changeBgColor:(id)arg1;
- (void)changeTitleColor:(id)arg1;
- (void)setBorderWithColorKeyAlpha:(struct KGColorKeyAlpha)arg1 forState:(unsigned long long)arg2;
- (void)setBorderWithColorKey:(long long)arg1 forState:(unsigned long long)arg2;
- (void)setBorderWithColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackGroundColorKeyAlpha:(struct KGColorKeyAlpha)arg1 forState:(unsigned long long)arg2;
- (void)setBackGroundColorKey:(long long)arg1 forState:(unsigned long long)arg2;
- (void)setBackGroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColorKeyAlpha:(struct KGColorKeyAlpha)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColorKey:(long long)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)handleType:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithType:(long long)arg1;

@end

