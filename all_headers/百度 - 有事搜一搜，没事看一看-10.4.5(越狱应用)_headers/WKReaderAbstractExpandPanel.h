//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WKReaderExpandPanelControlDelegate, WKReaderExpandPanelDataSource, WKReaderExpandPanelDelegate;

@interface WKReaderAbstractExpandPanel : UIView
{
    id <WKReaderExpandPanelDataSource> _datasource;
    id <WKReaderExpandPanelDelegate> _delegate;
    id <WKReaderExpandPanelControlDelegate> _controlDelegate;
}

@property(nonatomic) id <WKReaderExpandPanelControlDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
@property(nonatomic) id <WKReaderExpandPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <WKReaderExpandPanelDataSource> datasource; // @synthesize datasource=_datasource;
- (void)hide;
- (void)show;
- (void)loadCatalogList;
- (void)setHighlightedCatalog:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

