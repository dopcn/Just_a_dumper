//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImage, UILabel;

@interface SNBCubeOrderPriceCell : UITableViewCell
{
    UIButton *_currentPriceBtn;
    UIButton *_limitPriceBtn;
    UILabel *_titleLbl;
    UIImage *selectImg;
    UIImage *deSelectImg;
    CDUnknownBlockType _orderPriceTypeAction;
}

@property(copy, nonatomic) CDUnknownBlockType orderPriceTypeAction; // @synthesize orderPriceTypeAction=_orderPriceTypeAction;
- (void).cxx_destruct;
- (void)touchOrderPriceBtn:(id)arg1;
- (void)configButton:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

