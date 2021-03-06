//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WealthTallyBaseViewController.h"

#import "APDateSelectViewDelegate-Protocol.h"
#import "AUDialogDelegate-Protocol.h"
#import "AliTallyAccountSelectViewDelegate-Protocol.h"
#import "AliTallyCategorySelectViewDelegate-Protocol.h"
#import "AliTallyKeyboardV2ViewDataSource-Protocol.h"
#import "AliTallyKeyboardV2ViewDelegate-Protocol.h"
#import "BEEPhotoBrowserDelegate-Protocol.h"
#import "BEEPhotoPickerDelegate-Protocol.h"
#import "TallyDropDownListDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class APDateSelectView, AliTallyAccountSelectView, AliTallyCategorySelectView, AliTallyKeyboardV2View, AliTallyLabelButton, AliTallyPhotoAlbumView, AliTallyStatusBar, CreateNoteModel, NSArray, NSMutableArray, NSString, TallyDropDownList, UIImageView, UILabel, UIView;
@protocol WealthTallyEditNoteV2ViewControllerDelegate;

@interface WealthTallyEditNoteV2ViewController : WealthTallyBaseViewController <AUDialogDelegate, UIActionSheetDelegate, UITextFieldDelegate, AliTallyCategorySelectViewDelegate, AliTallyKeyboardV2ViewDelegate, AliTallyKeyboardV2ViewDataSource, TallyDropDownListDelegate, APDateSelectViewDelegate, AliTallyAccountSelectViewDelegate, BEEPhotoPickerDelegate, BEEPhotoBrowserDelegate>
{
    _Bool _isCreateNewNote;
    _Bool _isUserMobile;
    _Bool _is3_5InchScreen;
    id <WealthTallyEditNoteV2ViewControllerDelegate> _delegate;
    AliTallyCategorySelectView *_categorySelectView;
    AliTallyKeyboardV2View *_tallyKeyboardView;
    APDateSelectView *_dateSelectView;
    AliTallyAccountSelectView *_accountSelectView;
    AliTallyLabelButton *_dateButton;
    AliTallyLabelButton *_accountButton;
    AliTallyLabelButton *_noteButton;
    UILabel *_noteLabel;
    UIView *_maskView;
    AliTallyStatusBar *_statusBarView;
    CreateNoteModel *_noteModel;
    NSMutableArray *_delImageArray;
    NSArray *_dropMenuInfo;
    TallyDropDownList *_dropDownList;
    double _selectViewHeight;
    NSString *_tallyClassForSelectView;
    NSString *_categoryUuidForSelectView;
    AliTallyPhotoAlbumView *_cameraImageView;
    UIImageView *_lbsImageView;
    unsigned long long _displayStyle;
}

@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) _Bool is3_5InchScreen; // @synthesize is3_5InchScreen=_is3_5InchScreen;
@property(retain, nonatomic) UIImageView *lbsImageView; // @synthesize lbsImageView=_lbsImageView;
@property(retain, nonatomic) AliTallyPhotoAlbumView *cameraImageView; // @synthesize cameraImageView=_cameraImageView;
@property(copy, nonatomic) NSString *categoryUuidForSelectView; // @synthesize categoryUuidForSelectView=_categoryUuidForSelectView;
@property(copy, nonatomic) NSString *tallyClassForSelectView; // @synthesize tallyClassForSelectView=_tallyClassForSelectView;
@property(nonatomic) double selectViewHeight; // @synthesize selectViewHeight=_selectViewHeight;
@property(retain, nonatomic) TallyDropDownList *dropDownList; // @synthesize dropDownList=_dropDownList;
@property(retain, nonatomic) NSArray *dropMenuInfo; // @synthesize dropMenuInfo=_dropMenuInfo;
@property(nonatomic) _Bool isUserMobile; // @synthesize isUserMobile=_isUserMobile;
@property(nonatomic) _Bool isCreateNewNote; // @synthesize isCreateNewNote=_isCreateNewNote;
@property(retain, nonatomic) NSMutableArray *delImageArray; // @synthesize delImageArray=_delImageArray;
@property(retain, nonatomic) CreateNoteModel *noteModel; // @synthesize noteModel=_noteModel;
@property(retain, nonatomic) AliTallyStatusBar *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) AliTallyLabelButton *noteButton; // @synthesize noteButton=_noteButton;
@property(retain, nonatomic) AliTallyLabelButton *accountButton; // @synthesize accountButton=_accountButton;
@property(retain, nonatomic) AliTallyLabelButton *dateButton; // @synthesize dateButton=_dateButton;
@property(retain, nonatomic) AliTallyAccountSelectView *accountSelectView; // @synthesize accountSelectView=_accountSelectView;
@property(retain, nonatomic) APDateSelectView *dateSelectView; // @synthesize dateSelectView=_dateSelectView;
@property(retain, nonatomic) AliTallyKeyboardV2View *tallyKeyboardView; // @synthesize tallyKeyboardView=_tallyKeyboardView;
@property(retain, nonatomic) AliTallyCategorySelectView *categorySelectView; // @synthesize categorySelectView=_categorySelectView;
@property(nonatomic) __weak id <WealthTallyEditNoteV2ViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapMaskView:(id)arg1;
- (void)hideMaskView;
- (void)showMaskView;
- (void)photoBrowser:(id)arg1 deletePhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)photoPickerController:(id)arg1 didFinishPickingAssetData:(id)arg2;
- (void)photoPickerController:(id)arg1 didFinishPickingAssets:(id)arg2 theOriginal:(_Bool)arg3;
- (void)aliTallyAccountSelectViewDidCancel;
- (void)didSelectedAccount:(id)arg1;
- (void)aliTallyDateSelectViewDidCancel;
- (void)didSelectedDate:(long long)arg1;
- (void)handleGesture:(id)arg1;
- (void)dropDownOnClick:(id)arg1;
- (void)closeDropMenuList;
- (void)showDropDownList:(_Bool)arg1;
- (void)defaultNavigationMenuTitle:(id)arg1;
- (void)addNavigationMenuItem:(id)arg1 title:(id)arg2;
- (void)textFiledEditChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)actionSheetForCategory:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)handleEditNoteAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)handleDeleteAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)handleEditAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)handleErrorTipsAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)handleAddCategoryAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dialogView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dialogView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didClickedPicture:(id)arg1;
- (void)didClickAccountButton:(id)arg1;
- (void)didClickNoteButton:(id)arg1;
- (void)didClickNoteLabel:(id)arg1;
- (void)didClickDateButton:(id)arg1;
- (void)clickButtonCancel:(id)arg1;
- (id)originAmountString;
- (_Bool)userEditable;
- (void)amountValueDidChanged:(id)arg1;
- (void)clickedReturnButtonWithStatus:(_Bool)arg1 withAmount:(id)arg2;
- (void)scrollToSysCategory;
- (void)scrollToUserCategory;
- (void)addCategory;
- (void)longPressCategoryButton:(id)arg1;
- (void)selectedType:(id)arg1;
- (void)notificationRefreshNoteExtraInfo:(id)arg1;
- (void)notificationRefreshCategorySelectView:(id)arg1;
- (void)notificationRefreshUI:(id)arg1;
- (void)setThumbnailImage:(long long)arg1;
- (id)accountName:(id)arg1;
- (void)updateCameraImageView;
- (void)updateCategoryView;
- (void)updateNoteButtonStatus;
- (void)updateDateButton:(id)arg1;
- (void)updateAccountButtonStatus;
- (void)initData:(id)arg1;
- (id)configMenuInfo;
- (void)buildDropDownList;
- (void)buildNoteExtraView;
- (void)buildCategoryView;
- (void)buildLabelButtonView;
- (void)buildSubViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDataModel:(id)arg1 withCreateFlag:(_Bool)arg2 withUserMobile:(_Bool)arg3 withDelegate:(id)arg4 withStyle:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

