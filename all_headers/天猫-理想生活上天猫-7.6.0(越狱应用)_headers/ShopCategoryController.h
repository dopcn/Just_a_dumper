//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMViewController.h"

#import "ShopCategoryViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, ShopCategoryView, UITextField, UIView;

@interface ShopCategoryController : TMViewController <ShopCategoryViewDelegate, UITextFieldDelegate>
{
    UITextField *_searchTextField;
    _Bool _isInputing;
    NSString *_shopId;
    NSString *_sellerId;
    NSString *_keyword;
    NSString *_catId;
    NSString *_itemId;
    NSString *_catName;
    NSString *_hint;
    NSString *_query;
    ShopCategoryView *_categoryView;
    UIView *_inputBgView;
}

@property(retain, nonatomic) UIView *inputBgView; // @synthesize inputBgView=_inputBgView;
@property(retain, nonatomic) ShopCategoryView *categoryView; // @synthesize categoryView=_categoryView;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(nonatomic) _Bool isInputing; // @synthesize isInputing=_isInputing;
@property(retain, nonatomic) NSString *catName; // @synthesize catName=_catName;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (void)gotoSearchResultList:(id)arg1 categoryId:(id)arg2 keyword:(id)arg3;
- (void)loadShopCategoryData;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)attributedPlaceholder;
- (void)initNavigationBar;
- (void)gotoSearchResultList:(id)arg1 categoryId:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

