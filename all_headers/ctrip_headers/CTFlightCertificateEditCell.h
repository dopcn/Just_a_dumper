//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTTableViewCell.h"

@class UIImageView, UILabel, UITextField;

@interface CTFlightCertificateEditCell : CTTableViewCell
{
    UIImageView *_imageSelect;
    UILabel *_labelName;
    UITextField *_textFieldNumber;
}

@property(retain, nonatomic) UITextField *textFieldNumber; // @synthesize textFieldNumber=_textFieldNumber;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) UIImageView *imageSelect; // @synthesize imageSelect=_imageSelect;
- (void).cxx_destruct;
- (void)updateFrame:(_Bool)arg1;

@end

