//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MAPromotionCard, UIButton, UIImageView, UILabel;

@interface MAEPromoCardCell : UITableViewCell
{
    CDUnknownBlockType _block;
    UIImageView *_recommendTagImage;
    UILabel *_promoCardAmountLabel;
    UILabel *_promoCardDescLabel;
    UILabel *_promoCardNOLabel;
    UILabel *_promoCardDateLabel;
    UIButton *_usebutton;
    UILabel *_promoCardInfoLabel;
    MAPromotionCard *_promoCard;
}

@property(retain, nonatomic) MAPromotionCard *promoCard; // @synthesize promoCard=_promoCard;
@property(retain, nonatomic) UILabel *promoCardInfoLabel; // @synthesize promoCardInfoLabel=_promoCardInfoLabel;
@property(retain, nonatomic) UIButton *usebutton; // @synthesize usebutton=_usebutton;
@property(retain, nonatomic) UILabel *promoCardDateLabel; // @synthesize promoCardDateLabel=_promoCardDateLabel;
@property(retain, nonatomic) UILabel *promoCardNOLabel; // @synthesize promoCardNOLabel=_promoCardNOLabel;
@property(retain, nonatomic) UILabel *promoCardDescLabel; // @synthesize promoCardDescLabel=_promoCardDescLabel;
@property(retain, nonatomic) UILabel *promoCardAmountLabel; // @synthesize promoCardAmountLabel=_promoCardAmountLabel;
@property(retain, nonatomic) UIImageView *recommendTagImage; // @synthesize recommendTagImage=_recommendTagImage;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)updateWithData:(id)arg1;
- (void)useButton_click:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

