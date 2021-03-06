//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSDateFormatter, UIButton, UIImageView, UILabel, VSAligenmentLabel;
@protocol VICertificationReceiptCellDelegate;

@interface VIStudentReceiptCell : UICollectionViewCell
{
    UIImageView *_receiptBgImageView;
    UIImageView *_avatarImageView;
    UIImageView *_avatarBgImageView;
    UILabel *_respectLabel;
    VSAligenmentLabel *_contentLabel;
    VSAligenmentLabel *_signatureLabel;
    UIButton *_shareButton;
    NSDateFormatter *_dateFormatter;
    id <VICertificationReceiptCellDelegate> _delegate;
}

@property(nonatomic) __weak id <VICertificationReceiptCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) VSAligenmentLabel *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(retain, nonatomic) VSAligenmentLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *respectLabel; // @synthesize respectLabel=_respectLabel;
@property(retain, nonatomic) UIImageView *avatarBgImageView; // @synthesize avatarBgImageView=_avatarBgImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *receiptBgImageView; // @synthesize receiptBgImageView=_receiptBgImageView;
- (void).cxx_destruct;
- (void)setSignatureAttributes;
- (void)setContentAttributes;
- (void)onSharePressed:(id)arg1;
- (void)setStudentReceipt:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

