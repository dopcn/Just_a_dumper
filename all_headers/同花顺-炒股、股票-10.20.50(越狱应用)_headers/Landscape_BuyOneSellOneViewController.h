//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Landscape_StockRightChildViewBaseController.h"

@class HXSocketFetcher, UILabel;

@interface Landscape_BuyOneSellOneViewController : Landscape_StockRightChildViewBaseController
{
    UILabel *_sellLabel1;
    UILabel *_sellNumLabel1;
    UILabel *_buyLabel1;
    UILabel *_buyNumLabel1;
    HXSocketFetcher *_fetcher;
}

@property(retain, nonatomic) HXSocketFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(nonatomic) __weak UILabel *buyNumLabel1; // @synthesize buyNumLabel1=_buyNumLabel1;
@property(nonatomic) __weak UILabel *buyLabel1; // @synthesize buyLabel1=_buyLabel1;
@property(nonatomic) __weak UILabel *sellNumLabel1; // @synthesize sellNumLabel1=_sellNumLabel1;
@property(nonatomic) __weak UILabel *sellLabel1; // @synthesize sellLabel1=_sellLabel1;
- (void).cxx_destruct;
- (void)setDataWith:(id)arg1;
- (void)setLabelData:(id)arg1 NameLabel:(id)arg2;
- (void)setDefaultColorData:(id)arg1;
- (void)clearRequestFetcher;
- (void)clearData;
- (void)requestData:(_Bool)arg1;
- (void)viewDidLoad;

@end

