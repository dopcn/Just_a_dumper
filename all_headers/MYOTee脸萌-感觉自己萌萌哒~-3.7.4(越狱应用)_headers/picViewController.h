//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSArray, NSString, UIAlertView, UILabel, UIView, UIWebView;

@interface picViewController : UIViewController <UIWebViewDelegate>
{
    UIView *colorView;
    UIAlertView *myAlert;
    long long screenx;
    long long screeny;
    long long screenwidth;
    long long screenheigth;
    long long screenx1;
    long long screeny1;
    long long screenx2;
    long long screeny2;
    long long screenx3;
    long long screeny3;
    long long screenx4;
    long long screeny4;
    long long screenx5;
    long long screeny5;
    long long screenx6;
    long long screeny6;
    long long screenx7;
    long long screeny7;
    long long screenx8;
    long long screeny8;
    long long screenx9;
    long long screeny9;
    NSArray *HAIRCOLOR_PIC_SHOW;
    NSArray *SKINCOLOR_PIC_SHOW;
    NSArray *HAIR_MAN_PIC_ARRAY;
    NSArray *HAIR_FEMALE_PIC_ARRAY;
    NSArray *HAIRCOLOR_PIC_ARRAY;
    NSArray *FACE_PIC_ARRAY;
    NSArray *FACECOLOR_PIC_ARRAY;
    NSArray *EYEBROWS_PIC_ARRAY;
    NSArray *EYE_PIC_ARRAY;
    NSArray *MOUSE_PIC_ARRAY;
    NSArray *FEATURE_PIC_ARRAY;
    NSArray *GLASS_PIC_ARRAY;
    NSArray *CLOTHES_MAN_PIC_ARRAY;
    NSArray *CLOTHES_FEMALE_PIC_ARRAY;
    NSArray *HAT_PIC_ARRAY;
    NSArray *LIKE_PIC_ARRAY;
    NSArray *BG_PIC_ARRAY;
    NSArray *EXPRESS_PIC_ARRAY;
    NSArray *QIPAO_PIC_ARRAY;
    NSArray *QIPAO_PIC_ONE_ARRAY;
    NSArray *NOSE_PIC_ARRAY;
    int _two_ind;
    int _two_type_ind;
    int _edit_ind;
    UILabel *_myTittle;
    UIWebView *_webview1;
    UIWebView *_webview2;
    UIWebView *_webview3;
    UIWebView *_webview4;
    UIWebView *_webview5;
    UIWebView *_webview6;
    UIWebView *_webview7;
    UIWebView *_webview8;
    UIWebView *_webview9;
}

@property(retain, nonatomic) UIWebView *webview9; // @synthesize webview9=_webview9;
@property(retain, nonatomic) UIWebView *webview8; // @synthesize webview8=_webview8;
@property(retain, nonatomic) UIWebView *webview7; // @synthesize webview7=_webview7;
@property(retain, nonatomic) UIWebView *webview6; // @synthesize webview6=_webview6;
@property(retain, nonatomic) UIWebView *webview5; // @synthesize webview5=_webview5;
@property(retain, nonatomic) UIWebView *webview4; // @synthesize webview4=_webview4;
@property(retain, nonatomic) UIWebView *webview3; // @synthesize webview3=_webview3;
@property(retain, nonatomic) UIWebView *webview2; // @synthesize webview2=_webview2;
@property(retain, nonatomic) UIWebView *webview1; // @synthesize webview1=_webview1;
@property(nonatomic) int edit_ind; // @synthesize edit_ind=_edit_ind;
@property(nonatomic) int two_type_ind; // @synthesize two_type_ind=_two_type_ind;
@property(nonatomic) int two_ind; // @synthesize two_ind=_two_ind;
@property(nonatomic) __weak UILabel *myTittle; // @synthesize myTittle=_myTittle;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)documentsPath;
- (id)documentsPath:(id)arg1;
- (id)bundlePath:(id)arg1;
- (void)readgetArray:(int)arg1;
- (int)readFile;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)readFileArray;
- (void)writeFileArray:(id)arg1;
- (void)backApp;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

