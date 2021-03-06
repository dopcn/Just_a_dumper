//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSDictionary, NSString, TTFlagItem, UIImageView, UILabel;

@interface MeiHuaCell : UICollectionViewCell
{
    NSDictionary *_data;
    UIImageView *_icon;
    UILabel *_title;
    NSString *_flagID;
    UIImageView *_newflag;
    TTFlagItem *_flagItem;
}

+ (double)cellHeight;
+ (id)labelFont;
+ (id)identifier;
@property(retain, nonatomic) TTFlagItem *flagItem; // @synthesize flagItem=_flagItem;
@property(retain, nonatomic) UIImageView *newflag; // @synthesize newflag=_newflag;
@property(retain, nonatomic) NSString *flagID; // @synthesize flagID=_flagID;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)dismissFlag;
- (void)hideFlag;
- (void)showFlagIfExist;
- (void)showOnceFlag:(id)arg1;
- (void)showFlag:(id)arg1;
- (void)checkSelect:(id)arg1;
- (void)selectedCell:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)typeCheck:(long long)arg1;
- (void)setdata:(id)arg1 selectTitle:(id)arg2 groupID:(id)arg3;
- (void)dealloc;

@end

