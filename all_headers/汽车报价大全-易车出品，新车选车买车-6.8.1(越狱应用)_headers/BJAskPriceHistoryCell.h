//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BJContentInsetLabel, UIButton, UIImageView, UILabel, UIView;
@protocol BJAskPriceHistoryCellDelegate;

__attribute__((visibility("hidden")))
@interface BJAskPriceHistoryCell : UITableViewCell
{
    id <BJAskPriceHistoryCellDelegate> _delegate;
    UIView *_buttonView;
    UIView *_contentHeaderView;
    UILabel *_dealerLabel;
    UILabel *_timeLabel;
    UIImageView *_carImageView;
    UILabel *_carNameLabel;
    UILabel *_priceLabel;
    UILabel *_originalPriceLabel;
    UIButton *_telButton;
    UIButton *_askButton;
    BJContentInsetLabel *_priceChangeLabel;
}

+ (id)bitSpecialCellIdentifier;
+ (id)nibName;
@property(nonatomic) __weak BJContentInsetLabel *priceChangeLabel; // @synthesize priceChangeLabel=_priceChangeLabel;
@property(nonatomic) __weak UIButton *askButton; // @synthesize askButton=_askButton;
@property(nonatomic) __weak UIButton *telButton; // @synthesize telButton=_telButton;
@property(nonatomic) __weak UILabel *originalPriceLabel; // @synthesize originalPriceLabel=_originalPriceLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *carNameLabel; // @synthesize carNameLabel=_carNameLabel;
@property(nonatomic) __weak UIImageView *carImageView; // @synthesize carImageView=_carImageView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *dealerLabel; // @synthesize dealerLabel=_dealerLabel;
@property(nonatomic) __weak UIView *contentHeaderView; // @synthesize contentHeaderView=_contentHeaderView;
@property(nonatomic) __weak UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(nonatomic) id <BJAskPriceHistoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureUI:(id)arg1;
- (void)askPriceBtnTapped:(id)arg1;
- (void)telBtnTapped:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

