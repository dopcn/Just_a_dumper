//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSCellPresenter, FinalSearchProdcutModel, FinalSearchProductListCell, FinalSearchProductViewModel;

@protocol FSCellPresenterDelegate <NSObject>
- (void)fsCellPresenter:(FSCellPresenter *)arg1 addProductToFollowtWithModel:(FinalSearchProdcutModel *)arg2;
- (void)fsCellPresenter:(FSCellPresenter *)arg1 addProductToCartWithModel:(FinalSearchProdcutModel *)arg2;
- (void)fsCellPresenter:(FSCellPresenter *)arg1 showExposeWithViewModel:(FinalSearchProductViewModel *)arg2;
- (void)fsCellPresenter:(FSCellPresenter *)arg1 hiddenAllCellMenuWithCell:(FinalSearchProductListCell *)arg2;
- (void)fsCellPresenter:(FSCellPresenter *)arg1 listCell:(FinalSearchProductListCell *)arg2 listCustomEditing:(_Bool)arg3;
@end

