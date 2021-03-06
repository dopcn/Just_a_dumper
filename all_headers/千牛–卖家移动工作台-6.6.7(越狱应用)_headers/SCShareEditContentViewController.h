//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDYMUSBViewController.h"

#import "HPGrowingTextViewDelegate-Protocol.h"
#import "JDYMoveCollectionDataSource-Protocol.h"
#import "JDYMoveCollectionDelegateFlowLayout-Protocol.h"
#import "JDYUIActionSheetDelegate-Protocol.h"
#import "ShareToolBarDelegate-Protocol.h"

@class HPGrowingTextView, JDYSocialShareContent, NSMutableArray, NSString, SCShareEditToolBar, UICollectionView, UILabel;

@interface SCShareEditContentViewController : JDYMUSBViewController <JDYMoveCollectionDataSource, JDYMoveCollectionDelegateFlowLayout, ShareToolBarDelegate, JDYUIActionSheetDelegate, HPGrowingTextViewDelegate>
{
    JDYSocialShareContent *_sourceContent;
    HPGrowingTextView *_contentTextView;
    UICollectionView *_collectionView;
    SCShareEditToolBar *_toolBarView;
    NSMutableArray *_imgDatas;
    UILabel *_textCountLabel;
    unsigned long long _from;
}

@property(nonatomic) unsigned long long from; // @synthesize from=_from;
@property(retain, nonatomic) UILabel *textCountLabel; // @synthesize textCountLabel=_textCountLabel;
@property(retain, nonatomic) NSMutableArray *imgDatas; // @synthesize imgDatas=_imgDatas;
@property(retain, nonatomic) SCShareEditToolBar *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) HPGrowingTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) JDYSocialShareContent *sourceContent; // @synthesize sourceContent=_sourceContent;
- (void).cxx_destruct;
- (void)handleShareFail;
- (void)append2TextViewWithString:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dealloc;
- (void)saveShareContent2RemoteWithSuccess:(CDUnknownBlockType)arg1;
- (void)saveDraft;
- (void)gotoMyCoupon;
- (void)goToMyShop;
- (void)goToMyTeasure;
- (void)append2ContentImageWithImageUris:(id)arg1;
- (void)updateTextContentWithBizContent:(id)arg1;
- (void)convertOriginLink2ShortLink:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)append2ContentTextWithBizContents:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)shareToolBarDidChangeSwitch:(_Bool)arg1;
- (void)shareToolBarDidSelectBtnWithIndex:(unsigned long long)arg1;
- (void)handleEditedImageWithResult:(id)arg1;
- (void)openImageEditingComponentWithIndex:(unsigned long long)arg1;
- (void)openFileSelectComponent;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)removeKeyboardNotifications;
- (void)registKeyboardNotifications;
- (void)keyboardWillHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)drawCollectionView;
- (void)drawTitleView;
- (void)drawToolBar;
- (void)handleBackLogic;
- (void)shareBtnClick;
- (void)backBtnClick;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)prepareImageDatas;
- (id)initWithContent:(id)arg1 from:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

