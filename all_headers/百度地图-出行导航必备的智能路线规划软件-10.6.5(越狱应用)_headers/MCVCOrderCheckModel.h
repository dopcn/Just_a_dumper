//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class MCVCOrderModel;

@interface MCVCOrderCheckModel : JSONModel
{
    _Bool _exist_book;
    MCVCOrderModel *_orderModel;
    MCVCOrderModel *_bookModel;
}

@property(nonatomic) _Bool exist_book; // @synthesize exist_book=_exist_book;
@property(retain, nonatomic) MCVCOrderModel *bookModel; // @synthesize bookModel=_bookModel;
@property(retain, nonatomic) MCVCOrderModel *orderModel; // @synthesize orderModel=_orderModel;
- (void).cxx_destruct;

@end

