//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MCButtonView, MCDatePicker, NSDate, UIButton, UIImage;

@interface MCAllPicker : UIView
{
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    UIButton *_okButton;
    UIButton *_cancelButton;
    MCButtonView *_solarButtonView;
    MCButtonView *_lunarButtonView;
    MCButtonView *_buddhistButtonView;
    MCDatePicker *_datePicker;
}

@property(nonatomic) __weak MCDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak MCButtonView *buddhistButtonView; // @synthesize buddhistButtonView=_buddhistButtonView;
@property(nonatomic) __weak MCButtonView *lunarButtonView; // @synthesize lunarButtonView=_lunarButtonView;
@property(nonatomic) __weak MCButtonView *solarButtonView; // @synthesize solarButtonView=_solarButtonView;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
- (void).cxx_destruct;
- (void)buddhistButtonViewClick:(id)arg1;
- (void)lunarButtonViewClick:(id)arg1;
- (void)solarButtonViewClick:(id)arg1;
- (void)cancelButtonClick:(id)arg1;
- (void)okButtonClick:(id)arg1;
@property(retain, nonatomic) NSDate *chooseDate;
@property(nonatomic) int type;
- (void)resetButtonView;
- (void)initAllData;
- (void)initAllSubView;
- (void)initAllSubViewAndData;
- (void)awakeFromNib;

@end

