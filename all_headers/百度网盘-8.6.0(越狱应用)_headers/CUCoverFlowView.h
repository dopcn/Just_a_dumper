//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CUURLImageView, NSMutableData, NSString, NSURLConnection, UIActivityIndicatorView, UIImage, UIImageView;

@interface CUCoverFlowView : UIView
{
    UIImageView *contentImageView;
    CUURLImageView *bgImageView;
    NSURLConnection *urlConnection;
    NSMutableData *receivedData;
    UIActivityIndicatorView *indicator;
    int turnType;
    int xRate;
    int yRate;
    int pWidth;
    int pHeight;
    float scal;
    UIImage *contentImage;
    NSString *bgImageName;
    UIImageView *imageView1;
    UIImageView *imageView2;
    NSString *imageUrlStr;
    NSString *bgImageNameH;
    NSString *bgImageNameS;
    struct CGRect viewFrame;
}

@property(nonatomic) float scal; // @synthesize scal;
@property(retain, nonatomic) NSString *bgImageNameS; // @synthesize bgImageNameS;
@property(retain, nonatomic) NSString *bgImageNameH; // @synthesize bgImageNameH;
@property(nonatomic) int pHeight; // @synthesize pHeight;
@property(nonatomic) int pWidth; // @synthesize pWidth;
@property(nonatomic) int yRate; // @synthesize yRate;
@property(nonatomic) int xRate; // @synthesize xRate;
@property(retain, nonatomic) NSString *imageUrlStr; // @synthesize imageUrlStr;
@property(retain, nonatomic) UIImageView *imageView2; // @synthesize imageView2;
@property(retain, nonatomic) UIImageView *imageView1; // @synthesize imageView1;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame;
@property(nonatomic) int turnType; // @synthesize turnType;
@property(retain, nonatomic) NSString *bgImageName; // @synthesize bgImageName;
@property(retain, nonatomic) UIImage *contentImage; // @synthesize contentImage;
- (void).cxx_destruct;
- (id)getFilePath;
- (void)retrieveStopped;
- (void)startRetrieve;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)urlImageView:(id)arg1 loadError:(id)arg2;
- (void)urlImageView:(id)arg1 loadImageBy:(id)arg2;
- (void)fresh;

@end

