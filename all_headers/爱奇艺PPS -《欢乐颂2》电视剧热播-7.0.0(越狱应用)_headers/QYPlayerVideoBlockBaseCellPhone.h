//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface QYPlayerVideoBlockBaseCellPhone : UICollectionViewCell
{
    UILabel *_textLb;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *textLb; // @synthesize textLb=_textLb;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)createBottomLine;
- (void)createTextLb;
- (id)initWithFrame:(struct CGRect)arg1;

@end

