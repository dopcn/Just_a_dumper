//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPadCardViewControllerV3.h"

@class NSMutableArray, NSString, QYUBlockDataV3, QYUCardDataV3, UIButton;

@interface QYChildrenVIPViewController : QYUPadCardViewControllerV3
{
    NSString *selectTitle;
    QYUCardDataV3 *titleCard;
    QYUBlockDataV3 *selectBlock;
    UIButton *_selectBt;
    NSMutableArray *_focusPingBackArray;
}

@property(retain, nonatomic) NSMutableArray *focusPingBackArray; // @synthesize focusPingBackArray=_focusPingBackArray;
@property(retain, nonatomic) UIButton *selectBt; // @synthesize selectBt=_selectBt;
- (void).cxx_destruct;
- (void)dealloc;
- (void)recomFocusAdActionV3:(id)arg1;
- (void)checkFocusAndSendPingBackWithDict:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)selectBtPressed:(id)arg1;
- (void)drawSelectBt;

@end

