//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBHorizontalSlideViewCTL.h"

#import "TBBHorizontalScrollBarDelegate-Protocol.h"
#import "TBBRubyServiceDelegate-Protocol.h"

@class CALayer, NSArray, NSString, TBBAdvertV2Vo, TBBHorizontalScrollBar, TBBWirelessService;

@interface TBBFlashSaleHorizontalSlideViewCTL : TBBHorizontalSlideViewCTL <TBBHorizontalScrollBarDelegate, TBBRubyServiceDelegate>
{
    BOOL _isNoMoreData;
    TBBHorizontalScrollBar *_horizontalScrollBar;
    NSArray *_topBarItems;
    int selectedIndex;
    TBBWirelessService *_dealService;
    TBBAdvertV2Vo *adVo;
    CALayer *_lineLayer;
    NSString *_dealSrc;
}

@property(retain, nonatomic) NSString *dealSrc; // @synthesize dealSrc=_dealSrc;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) TBBAdvertV2Vo *adVo; // @synthesize adVo;
@property(retain, nonatomic) NSArray *topBarItems; // @synthesize topBarItems=_topBarItems;
@property(retain, nonatomic) TBBHorizontalScrollBar *horizontalScrollBar; // @synthesize horizontalScrollBar=_horizontalScrollBar;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)didShowPage:(id)arg1;
- (void)didSelectItemAtIndex:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)createContentView;
- (void)enableQueryConditionView:(BOOL)arg1;
- (void)getFlashSaleData;
- (void)createTopBarItems;
- (void)test;
- (void)didNetworkError:(id)arg1;
- (void)getFlashSaleCategoryFinish:(id)arg1;
- (void)refreshItem;
- (void)setParameters:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

