//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol GJUIViewDelegate_BusinessInfo;

@interface GJUIView_Evaluation_BusinessInfo : UIView
{
    UIImageView *_imageView_Avatar;
    UILabel *_label_Name;
    UILabel *_label_Company;
    UILabel *_label_Phone;
    UILabel *_label_Degrees_Title;
    UILabel *_label_Degrees;
    UIButton *_btn_Call;
    UIButton *_btn_Message;
    int _type;
    UIView *_lineView;
    id _object;
    id <GJUIViewDelegate_BusinessInfo> _delegate;
}

@property(nonatomic) __weak id <GJUIViewDelegate_BusinessInfo> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)action_Message;
- (void)action_Call;
- (void)contentInit;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

