//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface CMCardBoxFetchCardNumberCell : UITableViewCell
{
    UIImageView *_logo;
    UILabel *_bankName;
    UILabel *_name;
    UILabel *_cardNumber;
    UILabel *_cardType;
}

+ (id)loadCellFromXib;
@property(nonatomic) __weak UILabel *cardType; // @synthesize cardType=_cardType;
@property(nonatomic) __weak UILabel *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(nonatomic) __weak UILabel *name; // @synthesize name=_name;
@property(nonatomic) __weak UILabel *bankName; // @synthesize bankName=_bankName;
@property(nonatomic) __weak UIImageView *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;
- (id)fetchStart:(id)arg1;
- (void)fetchData:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

