//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMBaseViewModel.h"

@class JMAuthCellModel, NSArray, NSString;

@interface JMRegisterLoginBaseViewModel : JMBaseViewModel
{
    _Bool _hideExconnectView;
    _Bool _showBindMobileHeaderView;
    int _viewModelType;
    NSString *_buttonTitle;
    NSString *_propmtText;
    NSArray *_arrCells;
    JMAuthCellModel *_footerExtendModel;
}

@property(nonatomic) _Bool showBindMobileHeaderView; // @synthesize showBindMobileHeaderView=_showBindMobileHeaderView;
@property(nonatomic) _Bool hideExconnectView; // @synthesize hideExconnectView=_hideExconnectView;
@property(retain, nonatomic) JMAuthCellModel *footerExtendModel; // @synthesize footerExtendModel=_footerExtendModel;
@property(retain, nonatomic) NSArray *arrCells; // @synthesize arrCells=_arrCells;
@property(retain, nonatomic) NSString *propmtText; // @synthesize propmtText=_propmtText;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) int viewModelType; // @synthesize viewModelType=_viewModelType;
- (void).cxx_destruct;

@end

