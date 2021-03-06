//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"
#import "WebViewControllerDelegate-Protocol.h"

@class ASIHTTPRequest, BVCornerAdvertNode, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableString, NSString, NSURLConnection, PlayParameInfo, UIImageView, UIView, WebViewController;
@protocol PlayerAdvertDelegate;

@interface PlayerAdvert : NSObject <NSXMLParserDelegate, WebViewControllerDelegate>
{
    _Bool _hasPlayerAdvert;
    _Bool _isCornerInDurationAdvert;
    _Bool _bShowBaoFengGameCenter;
    _Bool _bShowWebView;
    _Bool _isFull;
    _Bool _isDownloadImageFinished;
    _Bool _bPlayerPause;
    float _imgW;
    float _imgH;
    float _imgX;
    float _imgY;
    float _labelFontSize;
    PlayParameInfo *_playParameInfo;
    long long _requestStatus;
    UIImageView *_mAdvertImage;
    UIImageView *_logoImageView;
    UIImageView *_dspImageView;
    NSString *_mAdtype;
    long long _playerAdvertReqTimes;
    long long _playerAdvertPVReportedCount;
    long long _playerAdvertReportTimer;
    long long _playerAdvertShowCount;
    NSString *_mItype;
    NSString *_mRtime;
    NSString *_mTitle;
    NSString *_mDec;
    NSString *_mAdid;
    NSString *_mSid;
    NSString *_mExpiredate;
    NSString *_mMaterial;
    NSMutableArray *_mArrayPvc;
    NSMutableArray *_mArrayPv;
    NSMutableArray *_mArrayClick;
    NSString *_mMid;
    NSString *_mType;
    NSString *_mLdp;
    NSMutableArray *_mArrayImg;
    NSString *_mLogo;
    NSString *_mDsp;
    NSMutableString *_mString;
    NSString *_corner_t_time;
    NSString *_corner_x_time;
    NSMutableArray *_mNodeArray;
    UIView *_advertLayer;
    ASIHTTPRequest *_mRequest;
    id <PlayerAdvertDelegate> _delegate;
    NSURLConnection *_connection;
    long long _displayAnimation;
    NSString *_deeplink;
    NSString *_pCurrentElementName;
    NSDictionary *_pCurrentAttributeDict;
    NSString *_contextCode;
    NSString *_inmobiNameSpace;
    long long _mXst;
    long long _mCache;
    NSMutableData *_receivedData;
    NSMutableDictionary *_dataDic;
    BVCornerAdvertNode *_mBVCornerAdvertNode;
    WebViewController *_mWebViewController;
}

@property(retain, nonatomic) WebViewController *mWebViewController; // @synthesize mWebViewController=_mWebViewController;
@property(retain, nonatomic) BVCornerAdvertNode *mBVCornerAdvertNode; // @synthesize mBVCornerAdvertNode=_mBVCornerAdvertNode;
@property(retain, nonatomic) NSMutableDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(nonatomic) long long mCache; // @synthesize mCache=_mCache;
@property(nonatomic) long long mXst; // @synthesize mXst=_mXst;
@property(copy, nonatomic) NSString *inmobiNameSpace; // @synthesize inmobiNameSpace=_inmobiNameSpace;
@property(copy, nonatomic) NSString *contextCode; // @synthesize contextCode=_contextCode;
@property(retain, nonatomic) NSDictionary *pCurrentAttributeDict; // @synthesize pCurrentAttributeDict=_pCurrentAttributeDict;
@property(retain, nonatomic) NSString *pCurrentElementName; // @synthesize pCurrentElementName=_pCurrentElementName;
@property(copy, nonatomic) NSString *deeplink; // @synthesize deeplink=_deeplink;
@property(nonatomic) long long displayAnimation; // @synthesize displayAnimation=_displayAnimation;
@property(nonatomic) float labelFontSize; // @synthesize labelFontSize=_labelFontSize;
@property(nonatomic) float imgY; // @synthesize imgY=_imgY;
@property(nonatomic) float imgX; // @synthesize imgX=_imgX;
@property(nonatomic) float imgH; // @synthesize imgH=_imgH;
@property(nonatomic) float imgW; // @synthesize imgW=_imgW;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool bPlayerPause; // @synthesize bPlayerPause=_bPlayerPause;
@property(nonatomic) id <PlayerAdvertDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ASIHTTPRequest *mRequest; // @synthesize mRequest=_mRequest;
@property(nonatomic) _Bool isDownloadImageFinished; // @synthesize isDownloadImageFinished=_isDownloadImageFinished;
@property(nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(nonatomic) _Bool bShowWebView; // @synthesize bShowWebView=_bShowWebView;
@property(nonatomic) _Bool bShowBaoFengGameCenter; // @synthesize bShowBaoFengGameCenter=_bShowBaoFengGameCenter;
@property(nonatomic) _Bool isCornerInDurationAdvert; // @synthesize isCornerInDurationAdvert=_isCornerInDurationAdvert;
@property(nonatomic) UIView *advertLayer; // @synthesize advertLayer=_advertLayer;
@property(retain, nonatomic) NSMutableArray *mNodeArray; // @synthesize mNodeArray=_mNodeArray;
@property(copy, nonatomic) NSString *corner_x_time; // @synthesize corner_x_time=_corner_x_time;
@property(copy, nonatomic) NSString *corner_t_time; // @synthesize corner_t_time=_corner_t_time;
@property(retain, nonatomic) NSMutableString *mString; // @synthesize mString=_mString;
@property(copy, nonatomic) NSString *mDsp; // @synthesize mDsp=_mDsp;
@property(copy, nonatomic) NSString *mLogo; // @synthesize mLogo=_mLogo;
@property(retain, nonatomic) NSMutableArray *mArrayImg; // @synthesize mArrayImg=_mArrayImg;
@property(copy, nonatomic) NSString *mLdp; // @synthesize mLdp=_mLdp;
@property(copy, nonatomic) NSString *mType; // @synthesize mType=_mType;
@property(copy, nonatomic) NSString *mMid; // @synthesize mMid=_mMid;
@property(retain, nonatomic) NSMutableArray *mArrayClick; // @synthesize mArrayClick=_mArrayClick;
@property(retain, nonatomic) NSMutableArray *mArrayPv; // @synthesize mArrayPv=_mArrayPv;
@property(retain, nonatomic) NSMutableArray *mArrayPvc; // @synthesize mArrayPvc=_mArrayPvc;
@property(copy, nonatomic) NSString *mMaterial; // @synthesize mMaterial=_mMaterial;
@property(copy, nonatomic) NSString *mExpiredate; // @synthesize mExpiredate=_mExpiredate;
@property(copy, nonatomic) NSString *mSid; // @synthesize mSid=_mSid;
@property(copy, nonatomic) NSString *mAdid; // @synthesize mAdid=_mAdid;
@property(copy, nonatomic) NSString *mDec; // @synthesize mDec=_mDec;
@property(copy, nonatomic) NSString *mTitle; // @synthesize mTitle=_mTitle;
@property(copy, nonatomic) NSString *mRtime; // @synthesize mRtime=_mRtime;
@property(copy, nonatomic) NSString *mItype; // @synthesize mItype=_mItype;
@property(nonatomic) long long playerAdvertShowCount; // @synthesize playerAdvertShowCount=_playerAdvertShowCount;
@property(nonatomic) long long playerAdvertReportTimer; // @synthesize playerAdvertReportTimer=_playerAdvertReportTimer;
@property(nonatomic) long long playerAdvertPVReportedCount; // @synthesize playerAdvertPVReportedCount=_playerAdvertPVReportedCount;
@property(nonatomic) long long playerAdvertReqTimes; // @synthesize playerAdvertReqTimes=_playerAdvertReqTimes;
@property(retain, nonatomic) NSString *mAdtype; // @synthesize mAdtype=_mAdtype;
@property(retain, nonatomic) UIImageView *dspImageView; // @synthesize dspImageView=_dspImageView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImageView *mAdvertImage; // @synthesize mAdvertImage=_mAdvertImage;
@property(nonatomic) long long requestStatus; // @synthesize requestStatus=_requestStatus;
@property(retain, nonatomic) PlayParameInfo *playParameInfo; // @synthesize playParameInfo=_playParameInfo;
@property(nonatomic) _Bool hasPlayerAdvert; // @synthesize hasPlayerAdvert=_hasPlayerAdvert;
- (void)sendOtherReport:(id)arg1;
- (void)reportAdvertPV;
- (void)reportAdvertClick;
- (void)reportAdvertWithItem:(CDStruct_578615e8)arg1;
- (void)reportAdvert:(int)arg1 withEcode:(int)arg2;
- (void)closeWebViewController;
- (void)exitWebViewControllerWithType:(unsigned long long)arg1;
- (void)gotoAdvertPage;
- (void)resetCornerAdvertInfo;
- (void)closeAdvert;
- (void)hideAdvert:(_Bool)arg1;
- (void)showAdvert:(id)arg1;
- (_Bool)validAdvertInfo;
- (void)deleteMoreCacheWithFilesByModDate:(id)arg1;
- (void)cacheImageData:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)setAdvertImage:(id)arg1;
- (void)downAdvertImage;
- (void)init_mString;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)advertRequestSuccess;
- (void)ParserData:(id)arg1;
- (int)getMachineTypeNum;
- (id)networkStatCode;
- (id)getAdvertOpenUUID;
- (id)getCarrierName;
- (void)ParserResponseData:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 willRedirectToURL:(id)arg2;
- (void)requestRedirected:(id)arg1;
- (void)requestWithParam:(id)arg1 reqTimes:(int)arg2 adVertTag:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

