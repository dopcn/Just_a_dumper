//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDJPPickViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDJPDeliveryAddressSubView, JDShippingAddressModel, NSString, UITableView, UITextField;

@interface JDJPXiechengDeliveryAddressView : UIView <UITableViewDataSource, UITableViewDelegate, JDJPPickViewDelegate>
{
    UITableView *DataTable;
    JDJPDeliveryAddressSubView *addressSubView;
    long long _taitouIndex;
    long long addressIndex;
    _Bool fapiao;
    _Bool insuFapiao;
    _Bool xingcheng;
    _Bool _fapiaoEnable;
    int _deliveryFee;
    JDShippingAddressModel *_addressModel;
    UITextField *_taitouField;
    double _preHeight;
    NSString *_billType;
    NSString *_insuTaitouValueStr;
}

@property(nonatomic) int deliveryFee; // @synthesize deliveryFee=_deliveryFee;
@property(retain, nonatomic) NSString *insuTaitouValueStr; // @synthesize insuTaitouValueStr=_insuTaitouValueStr;
@property(nonatomic) long long taitouIndex; // @synthesize taitouIndex=_taitouIndex;
@property(nonatomic) _Bool fapiaoEnable; // @synthesize fapiaoEnable=_fapiaoEnable;
@property(retain, nonatomic) NSString *billType; // @synthesize billType=_billType;
@property(nonatomic) double preHeight; // @synthesize preHeight=_preHeight;
@property(retain, nonatomic) UITextField *taitouField; // @synthesize taitouField=_taitouField;
@property(retain, nonatomic) JDShippingAddressModel *addressModel; // @synthesize addressModel=_addressModel;
- (_Bool)needAddress;
- (_Bool)getXingchengdan;
- (_Bool)getNoXingchengdan;
- (_Bool)getInsuFapiao;
- (_Bool)getNoInsuFapiao;
- (_Bool)getFapiao;
- (_Bool)getNoFapiao;
- (void)confirmButtonClicked;
- (void)fapiaoMaiDian;
- (void)xingchengMaiDian;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)adressCell;
- (id)taitouCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadDeliveryFee;
- (double)getHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

