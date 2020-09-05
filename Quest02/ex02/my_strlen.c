<!DOCTYPE html>
<html lang="ru-RU" class="theme-gitea">
<head data-suburl="">
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<meta http-equiv="x-ua-compatible" content="ie=edge">
	<title>quest02_10612_a-8xmt/quest02 - ex02/my_strlen.c at dev -  quest02 - git </title>
	<link rel="manifest" href="/manifest.json" crossorigin="use-credentials">
	<meta name="theme-color" content="#6cc644">
	<meta name="author" content="quest02_10612_a-8xmt" />
	<meta name="description" content="quest02" />
	<meta name="keywords" content="go,git,self-hosted,gitea">
	<meta name="referrer" content="no-referrer" />
	<meta name="_csrf" content="jLA_Suj9_UM0ycRizcTi-JMJZcc6MTU5OTMwOTcyMjE5Nzc2MzMyMg" />
	
		<meta name="_uid" content="7328" />
	
	
	

	<script>
		window.config = {
			AppVer: '1.13.0\u002bdev-500-g3270e7a44',
			AppSubUrl: '',
			StaticUrlPrefix: '',
			UseServiceWorker:  true ,
			csrf: 'jLA_Suj9_UM0ycRizcTi-JMJZcc6MTU5OTMwOTcyMjE5Nzc2MzMyMg',
			HighlightJS: false,
			SimpleMDE: false,
			Tribute: false,
			U2F: false,
			Heatmap: false,
			heatmapUser: null,
			NotificationSettings: {
				MinTimeout:  10000 ,
				TimeoutStep:   10000 ,
				MaxTimeout:  60000 ,
				EventSourceUpdateTime:  10000 ,
			},
			PageIsProjects: false,
      
		};
	</script>
	<link rel="icon" href="/img/favicon.svg" type="image/svg+xml">
	<link rel="alternate icon" href="/img/favicon.png" type="image/png">
	<link rel="mask-icon" href="/img/gitea-safari.svg" color="#609926">
	<link rel="fluid-icon" href="/img/gitea-lg.png" title="git">

	<link rel="stylesheet" href="/css/index.css?v=8a916995465ebe639301af65515a4176">
	<noscript>
		<style>
			.dropdown:hover > .menu { display: block; }
			.ui.secondary.menu .dropdown.item > .menu { margin-top: 0; }
		</style>
	</noscript>
	<style class="list-search-style"></style>

	
		<meta property="og:title" content="quest02" />
		<meta property="og:url" content="https://git.us.qwasar.io/quest02_10612_a-8xmt/quest02" />
		
	
	<meta property="og:type" content="object" />
	
		<meta property="og:image" content="https://git.us.qwasar.io/user/avatar/quest02_10612_a-8xmt/-1" />
	

<meta property="og:site_name" content="git" />

	


</head>
<body>
	

	<div class="full height">
		<noscript>Пожалуйста, включите JavaScript.</noscript>

		

		
			<div class="ui top secondary stackable main menu following bar light">
				<div class="ui container" id="navbar">
	<div class="item brand" style="justify-content: space-between;">
		<a href="/">
			<img class="ui mini image" src="/img/gitea-sm.png">
		</a>
		<div class="ui basic icon button mobile-only" id="navbar-expand-toggle">
			<i class="sidebar icon"></i>
		</div>
	</div>

	
		<a class="item " href="/">Панель управления</a>
		
		<a class="item " href="/issues">Задачи</a>
		
		
		<a class="item " href="/pulls">Pull Request&#39;ы</a>
		
		
		<a class="item " href="/milestones">Этапы</a>
		
		<a class="item " href="/explore/repos">Обзор</a>
	

	

	


	
		<div class="right stackable menu">
			<a href="/notifications" class="item poping up" data-content='Уведомления' data-variation="tiny inverted">
				<span class="text">
					<span class="fitted"><svg viewBox="0 0 16 16" class="svg octicon-bell" width="16" height="16" aria-hidden="true"><path d="M8 16a2 2 0 001.985-1.75c.017-.137-.097-.25-.235-.25h-3.5c-.138 0-.252.113-.235.25A2 2 0 008 16z"/><path fill-rule="evenodd" d="M8 1.5A3.5 3.5 0 004.5 5v2.947c0 .346-.102.683-.294.97l-1.703 2.556a.018.018 0 00-.003.01l.001.006c0 .002.002.004.004.006a.017.017 0 00.006.004l.007.001h10.964l.007-.001a.016.016 0 00.006-.004.016.016 0 00.004-.006l.001-.007a.017.017 0 00-.003-.01l-1.703-2.554a1.75 1.75 0 01-.294-.97V5A3.5 3.5 0 008 1.5zM3 5a5 5 0 0110 0v2.947c0 .05.015.098.042.139l1.703 2.555A1.518 1.518 0 0113.482 13H2.518a1.518 1.518 0 01-1.263-2.36l1.703-2.554A.25.25 0 003 7.947V5z"/></svg></span>
					<span class="sr-mobile-only">Уведомления</span>
					
					
					<span class="ui red label  notification_count">
						37
					</span>
				</span>
			</a>

			<div class="ui dropdown jump item poping up" data-content="Создать…" data-variation="tiny inverted">
				<span class="text">
					<span class="fitted"><svg viewBox="0 0 16 16" class="svg octicon-plus" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 2a.75.75 0 01.75.75v4.5h4.5a.75.75 0 010 1.5h-4.5v4.5a.75.75 0 01-1.5 0v-4.5h-4.5a.75.75 0 010-1.5h4.5v-4.5A.75.75 0 018 2z"/></svg></span>
					<span class="sr-mobile-only">Создать…</span>
					<span class="fitted not-mobile"><svg viewBox="0 0 16 16" class="svg octicon-triangle-down" width="16" height="16" aria-hidden="true"><path d="M4.427 6.427l3.396 3.396a.25.25 0 00.354 0l3.396-3.396A.25.25 0 0011.396 6H4.604a.25.25 0 00-.177.427z"/></svg></span>
				</span>
				<div class="menu">
					<a class="item" href="/repo/create">
						<span class="fitted"><svg viewBox="0 0 16 16" class="svg octicon-plus" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 2a.75.75 0 01.75.75v4.5h4.5a.75.75 0 010 1.5h-4.5v4.5a.75.75 0 01-1.5 0v-4.5h-4.5a.75.75 0 010-1.5h4.5v-4.5A.75.75 0 018 2z"/></svg></span> Новый репозиторий
					</a>
					<a class="item" href="/repo/migrate">
						<span class="fitted"><svg viewBox="0 0 16 16" class="svg octicon-repo-push" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1 2.5A2.5 2.5 0 013.5 0h8.75a.75.75 0 01.75.75v3.5a.75.75 0 01-1.5 0V1.5h-8a1 1 0 00-1 1v6.708A2.492 2.492 0 013.5 9h3.25a.75.75 0 010 1.5H3.5a1 1 0 100 2h5.75a.75.75 0 010 1.5H3.5A2.5 2.5 0 011 11.5v-9zm13.23 7.79a.75.75 0 001.06-1.06l-2.505-2.505a.75.75 0 00-1.06 0L9.22 9.229a.75.75 0 001.06 1.061l1.225-1.224v6.184a.75.75 0 001.5 0V9.066l1.224 1.224z"/></svg></span> Новая миграция
					</a>
					
					<a class="item" href="/org/create">
						<span class="fitted"><svg viewBox="0 0 16 16" class="svg octicon-organization" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 14.25c0 .138.112.25.25.25H4v-1.25a.75.75 0 01.75-.75h2.5a.75.75 0 01.75.75v1.25h2.25a.25.25 0 00.25-.25V1.75a.25.25 0 00-.25-.25h-8.5a.25.25 0 00-.25.25v12.5zM1.75 16A1.75 1.75 0 010 14.25V1.75C0 .784.784 0 1.75 0h8.5C11.216 0 12 .784 12 1.75v12.5c0 .085-.006.168-.018.25h2.268a.25.25 0 00.25-.25V8.285a.25.25 0 00-.111-.208l-1.055-.703a.75.75 0 11.832-1.248l1.055.703c.487.325.779.871.779 1.456v5.965A1.75 1.75 0 0114.25 16h-3.5a.75.75 0 01-.197-.026c-.099.017-.2.026-.303.026h-3a.75.75 0 01-.75-.75V14h-1v1.25a.75.75 0 01-.75.75h-3zM3 3.75A.75.75 0 013.75 3h.5a.75.75 0 010 1.5h-.5A.75.75 0 013 3.75zM3.75 6a.75.75 0 000 1.5h.5a.75.75 0 000-1.5h-.5zM3 9.75A.75.75 0 013.75 9h.5a.75.75 0 010 1.5h-.5A.75.75 0 013 9.75zM7.75 9a.75.75 0 000 1.5h.5a.75.75 0 000-1.5h-.5zM7 6.75A.75.75 0 017.75 6h.5a.75.75 0 010 1.5h-.5A.75.75 0 017 6.75zM7.75 3a.75.75 0 000 1.5h.5a.75.75 0 000-1.5h-.5z"/></svg></span> Новая организация
					</a>
					
				</div>
			</div>

			<div class="ui dropdown jump item poping up" tabindex="-1" data-content="Профиль и настройки..." data-variation="tiny inverted">
				<span class="text">
					<img class="ui tiny avatar image" width="24" height="24" src="/user/avatar/khushaev_a/-1">
					<span class="sr-only">Профиль и настройки...</span>
					<span class="mobile-only">khushaev_a</span>
					<span class="fitted not-mobile" tabindex="-1"><svg viewBox="0 0 16 16" class="svg octicon-triangle-down" width="16" height="16" aria-hidden="true"><path d="M4.427 6.427l3.396 3.396a.25.25 0 00.354 0l3.396-3.396A.25.25 0 0011.396 6H4.604a.25.25 0 00-.177.427z"/></svg></span>
				</span>
				<div class="menu user-menu" tabindex="-1">
					<div class="ui header">
						Вы вошли как <strong>khushaev_a</strong>
					</div>

					<div class="divider"></div>
					<a class="item" href="/khushaev_a">
						<svg viewBox="0 0 16 16" class="svg octicon-person" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M10.5 5a2.5 2.5 0 11-5 0 2.5 2.5 0 015 0zm.061 3.073a4 4 0 10-5.123 0 6.004 6.004 0 00-3.431 5.142.75.75 0 001.498.07 4.5 4.5 0 018.99 0 .75.75 0 101.498-.07 6.005 6.005 0 00-3.432-5.142z"/></svg>
						Профиль
					</a>
					<a class="item" href="/khushaev_a?tab=stars">
						<svg viewBox="0 0 16 16" class="svg octicon-star" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25zm0 2.445L6.615 5.5a.75.75 0 01-.564.41l-3.097.45 2.24 2.184a.75.75 0 01.216.664l-.528 3.084 2.769-1.456a.75.75 0 01.698 0l2.77 1.456-.53-3.084a.75.75 0 01.216-.664l2.24-2.183-3.096-.45a.75.75 0 01-.564-.41L8 2.694v.001z"/></svg>
						Избранные
					</a>
					<a class=" item" href="/user/settings">
						<svg viewBox="0 0 16 16" class="svg octicon-tools" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M5.433 2.304A4.494 4.494 0 003.5 6c0 1.598.832 3.002 2.09 3.802.518.328.929.923.902 1.64v.008l-.164 3.337a.75.75 0 11-1.498-.073l.163-3.33c.002-.085-.05-.216-.207-.316A5.996 5.996 0 012 6a5.994 5.994 0 012.567-4.92 1.482 1.482 0 011.673-.04c.462.296.76.827.76 1.423v2.82c0 .082.041.16.11.206l.75.51a.25.25 0 00.28 0l.75-.51A.25.25 0 009 5.282V2.463c0-.596.298-1.127.76-1.423a1.482 1.482 0 011.673.04A5.994 5.994 0 0114 6a5.996 5.996 0 01-2.786 5.068c-.157.1-.209.23-.207.315l.163 3.33a.75.75 0 11-1.498.074l-.164-3.345c-.027-.717.384-1.312.902-1.64A4.496 4.496 0 0012.5 6a4.494 4.494 0 00-1.933-3.696c-.024.017-.067.067-.067.16v2.818a1.75 1.75 0 01-.767 1.448l-.75.51a1.75 1.75 0 01-1.966 0l-.75-.51A1.75 1.75 0 015.5 5.282V2.463c0-.092-.043-.142-.067-.159zm.01-.005z"/></svg>
						Настройки
					</a>
					<a class="item" target="_blank" rel="noopener noreferrer" href="https://docs.gitea.io">
						<svg viewBox="0 0 16 16" class="svg octicon-question" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1.5a6.5 6.5 0 100 13 6.5 6.5 0 000-13zM0 8a8 8 0 1116 0A8 8 0 010 8zm9 3a1 1 0 11-2 0 1 1 0 012 0zM6.92 6.085c.081-.16.19-.299.34-.398.145-.097.371-.187.74-.187.28 0 .553.087.738.225A.613.613 0 019 6.25c0 .177-.04.264-.077.318a.956.956 0 01-.277.245c-.076.051-.158.1-.258.161l-.007.004a7.728 7.728 0 00-.313.195 2.416 2.416 0 00-.692.661.75.75 0 001.248.832.956.956 0 01.276-.245 6.3 6.3 0 01.26-.16l.006-.004c.093-.057.204-.123.313-.195.222-.149.487-.355.692-.662.214-.32.329-.702.329-1.15 0-.76-.36-1.348-.863-1.725A2.76 2.76 0 008 4c-.631 0-1.155.16-1.572.438-.413.276-.68.638-.849.977a.75.75 0 101.342.67z"/></svg>
						Помощь
					</a>
					

					<div class="divider"></div>
					<a class="item link-action" href data-url="/user/logout" data-redirect="/">
						<svg viewBox="0 0 16 16" class="svg octicon-sign-out" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M2 2.75C2 1.784 2.784 1 3.75 1h2.5a.75.75 0 010 1.5h-2.5a.25.25 0 00-.25.25v10.5c0 .138.112.25.25.25h2.5a.75.75 0 010 1.5h-2.5A1.75 1.75 0 012 13.25V2.75zm10.44 4.5H6.75a.75.75 0 000 1.5h5.69l-1.97 1.97a.75.75 0 101.06 1.06l3.25-3.25a.75.75 0 000-1.06l-3.25-3.25a.75.75 0 10-1.06 1.06l1.97 1.97z"/></svg>
						Выход
					</a>
				</div>
			</div>
		</div>
	
</div>

			</div>
		


<div class="repository file list ">
	<div class="header-wrapper">

	<div class="ui container">
		<div class="repo-header">
			<div class="ui huge breadcrumb repo-title">
				
					<div class="repo-header-icon">
	
		
			<svg viewBox="0 0 16 16" class="svg octicon-lock" width="32" height="32" aria-hidden="true"><path fill-rule="evenodd" d="M4 4v2h-.25A1.75 1.75 0 002 7.75v5.5c0 .966.784 1.75 1.75 1.75h8.5A1.75 1.75 0 0014 13.25v-5.5A1.75 1.75 0 0012.25 6H12V4a4 4 0 10-8 0zm6.5 2V4a2.5 2.5 0 00-5 0v2h5zM12 7.5h.25a.25.25 0 01.25.25v5.5a.25.25 0 01-.25.25h-8.5a.25.25 0 01-.25-.25v-5.5a.25.25 0 01.25-.25H12z"/></svg>
		
	
</div>

				
				<a href="/quest02_10612_a-8xmt">quest02_10612_a-8xmt</a>
				<div class="divider"> / </div>
				<a href="/quest02_10612_a-8xmt/quest02">quest02</a>
				
					
						<span class="ui basic label">Private</span>
					
				
				
				
				
				
			</div>
			
				<div class="repo-buttons">
					<form method="post" action="/quest02_10612_a-8xmt/quest02/action/unwatch?redirect_to=%2fquest02_10612_a-8xmt%2fquest02%2fsrc%2fbranch%2fdev%2fex02%2fmy_strlen.c">
						<input type="hidden" name="_csrf" value="jLA_Suj9_UM0ycRizcTi-JMJZcc6MTU5OTMwOTcyMjE5Nzc2MzMyMg">
						<div class="ui labeled button" tabindex="0">
							<button type="submit" class="ui compact basic button">
								<svg viewBox="0 0 16 16" class="svg octicon-eye-closed" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M.143 2.31a.75.75 0 011.047-.167l14.5 10.5a.75.75 0 11-.88 1.214l-2.248-1.628C11.346 13.19 9.792 14 8 14c-1.981 0-3.67-.992-4.933-2.078C1.797 10.832.88 9.577.43 8.9a1.618 1.618 0 010-1.797c.353-.533.995-1.42 1.868-2.305L.31 3.357A.75.75 0 01.143 2.31zm3.386 3.378a14.21 14.21 0 00-1.85 2.244.12.12 0 00-.022.068c0 .021.006.045.022.068.412.621 1.242 1.75 2.366 2.717C5.175 11.758 6.527 12.5 8 12.5c1.195 0 2.31-.488 3.29-1.191L9.063 9.695A2 2 0 016.058 7.52l-2.53-1.832zM8 3.5c-.516 0-1.017.09-1.499.251a.75.75 0 11-.473-1.423A6.23 6.23 0 018 2c1.981 0 3.67.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.619 1.619 0 010 1.798c-.11.166-.248.365-.41.587a.75.75 0 11-1.21-.887c.148-.201.272-.382.371-.53a.119.119 0 000-.137c-.412-.621-1.242-1.75-2.366-2.717C10.825 4.242 9.473 3.5 8 3.5z"/></svg>Перестать следить
							</button>
							<a class="ui basic label" href="/quest02_10612_a-8xmt/quest02/watchers">
								2
							</a>
						</div>
					</form>
					<form method="post" action="/quest02_10612_a-8xmt/quest02/action/star?redirect_to=%2fquest02_10612_a-8xmt%2fquest02%2fsrc%2fbranch%2fdev%2fex02%2fmy_strlen.c">
						<input type="hidden" name="_csrf" value="jLA_Suj9_UM0ycRizcTi-JMJZcc6MTU5OTMwOTcyMjE5Nzc2MzMyMg">
						<div class="ui labeled button" tabindex="0">
							<button type="submit" class="ui compact basic button">
								<svg viewBox="0 0 16 16" class="svg octicon-star" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25zm0 2.445L6.615 5.5a.75.75 0 01-.564.41l-3.097.45 2.24 2.184a.75.75 0 01.216.664l-.528 3.084 2.769-1.456a.75.75 0 01.698 0l2.77 1.456-.53-3.084a.75.75 0 01.216-.664l2.24-2.183-3.096-.45a.75.75 0 01-.564-.41L8 2.694v.001z"/></svg>В избранное
							</button>
							<a class="ui basic label" href="/quest02_10612_a-8xmt/quest02/stars">
								0
							</a>
						</div>
					</form>
					
						<div class="ui labeled button " tabindex="0">
							<a class="ui compact basic button " href="/repo/fork/10648" data-position="top center" data-variation="tiny">
								<svg viewBox="0 0 16 16" class="svg octicon-repo-forked" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M5 3.25a.75.75 0 11-1.5 0 .75.75 0 011.5 0zm0 2.122a2.25 2.25 0 10-1.5 0v.878A2.25 2.25 0 005.75 8.5h1.5v2.128a2.251 2.251 0 101.5 0V8.5h1.5a2.25 2.25 0 002.25-2.25v-.878a2.25 2.25 0 10-1.5 0v.878a.75.75 0 01-.75.75h-4.5A.75.75 0 015 6.25v-.878zm3.75 7.378a.75.75 0 11-1.5 0 .75.75 0 011.5 0zm3-8.75a.75.75 0 100-1.5.75.75 0 000 1.5z"/></svg>Форкнуть
							</a>
							<a class="ui basic label" href="/quest02_10612_a-8xmt/quest02/forks">
								0
							</a>
						</div>
					
				</div>
			
		</div>
	</div>

	<div class="ui tabs container">
		
			<div class="ui tabular stackable menu navbar">
				
				<a class="active item" href="/quest02_10612_a-8xmt/quest02">
					<svg viewBox="0 0 16 16" class="svg octicon-code" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4.72 3.22a.75.75 0 011.06 1.06L2.06 8l3.72 3.72a.75.75 0 11-1.06 1.06L.47 8.53a.75.75 0 010-1.06l4.25-4.25zm6.56 0a.75.75 0 10-1.06 1.06L13.94 8l-3.72 3.72a.75.75 0 101.06 1.06l4.25-4.25a.75.75 0 000-1.06l-4.25-4.25z"/></svg> Код
				</a>
				

				

				

				
					<a class=" item" href="/quest02_10612_a-8xmt/quest02/pulls">
						<svg viewBox="0 0 16 16" class="svg octicon-git-pull-request" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.177 3.073L9.573.677A.25.25 0 0110 .854v4.792a.25.25 0 01-.427.177L7.177 3.427a.25.25 0 010-.354zM3.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122v5.256a2.251 2.251 0 11-1.5 0V5.372A2.25 2.25 0 011.5 3.25zM11 2.5h-1V4h1a1 1 0 011 1v5.628a2.251 2.251 0 101.5 0V5A2.5 2.5 0 0011 2.5zm1 10.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0zM3.75 12a.75.75 0 100 1.5.75.75 0 000-1.5z"/></svg> Pull Request&#39;ы <span class="ui gray small label">0</span>
					</a>
				

				

				

				

				
					<a class=" item" href="/quest02_10612_a-8xmt/quest02/activity">
						<svg viewBox="0 0 16 16" class="svg octicon-pulse" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M6 2a.75.75 0 01.696.471L10 10.731l1.304-3.26A.75.75 0 0112 7h3.25a.75.75 0 010 1.5h-2.742l-1.812 4.528a.75.75 0 01-1.392 0L6 4.77 4.696 8.03A.75.75 0 014 8.5H.75a.75.75 0 010-1.5h2.742l1.812-4.529A.75.75 0 016 2z"/></svg> Активность
					</a>
				

				

				
			</div>
		
	</div>
	<div class="ui tabs divider"></div>
</div>

	<div class="ui container ">
		



		<div class="ui repo-description">
			<div id="repo-desc">
				
				<a class="link" href=""></a>
			</div>
			
		</div>
		<div class="ui" id="repo-topics">
		
		
		</div>
		
		<div class="hide" id="validate_prompt">
			<span id="count_prompt">Вы не можете выбрать более 25 тем</span>
			<span id="format_prompt">Темы должны начинаться с буквы или цифры, могут содержать дефисы(-) и должны содержать не более 35 символов.</span>
		</div>
		
		<div class="ui segments repository-summary">
	<div class="ui segment sub-menu repository-menu">
		<div class="ui two horizontal center link list">
			
				<div class="item">
					<a class="ui" href="/quest02_10612_a-8xmt/quest02/commits/branch/dev"><svg viewBox="0 0 16 16" class="svg octicon-history" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.643 3.143L.427 1.927A.25.25 0 000 2.104V5.75c0 .138.112.25.25.25h3.646a.25.25 0 00.177-.427L2.715 4.215a6.5 6.5 0 11-1.18 4.458.75.75 0 10-1.493.154 8.001 8.001 0 101.6-5.684zM7.75 4a.75.75 0 01.75.75v2.992l2.028.812a.75.75 0 01-.557 1.392l-2.5-1A.75.75 0 017 8.25v-3.5A.75.75 0 017.75 4z"/></svg> <b>2</b> коммитов</a>
				</div>
			
			
				<div class="item">
					<a class="ui" href="/quest02_10612_a-8xmt/quest02/branches/"><svg viewBox="0 0 16 16" class="svg octicon-git-branch" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122V6A2.5 2.5 0 0110 8.5H6a1 1 0 00-1 1v1.128a2.251 2.251 0 11-1.5 0V5.372a2.25 2.25 0 111.5 0v1.836A2.492 2.492 0 016 7h4a1 1 0 001-1v-.628A2.25 2.25 0 019.5 3.25zM4.25 12a.75.75 0 100 1.5.75.75 0 000-1.5zM3.5 3.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0z"/></svg> <b>3</b> Ветки</a>
				</div>
				<div class="item">
					<span class="ui"><svg viewBox="0 0 16 16" class="svg octicon-database" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M2.5 3.5c0-.133.058-.318.282-.55.227-.237.592-.484 1.1-.708C4.899 1.795 6.354 1.5 8 1.5c1.647 0 3.102.295 4.117.742.51.224.874.47 1.101.707.224.233.282.418.282.551 0 .133-.058.318-.282.55-.227.237-.592.484-1.1.708C11.101 5.205 9.646 5.5 8 5.5c-1.647 0-3.102-.295-4.117-.742-.51-.224-.874-.47-1.101-.707-.224-.233-.282-.418-.282-.551zM1 3.5c0-.626.292-1.165.7-1.59.406-.422.956-.767 1.579-1.041C4.525.32 6.195 0 8 0c1.805 0 3.475.32 4.722.869.622.274 1.172.62 1.578 1.04.408.426.7.965.7 1.591v9c0 .626-.292 1.165-.7 1.59-.406.422-.956.767-1.579 1.041C11.476 15.68 9.806 16 8 16c-1.805 0-3.475-.32-4.721-.869-.623-.274-1.173-.62-1.579-1.04-.408-.426-.7-.965-.7-1.591v-9zM2.5 8V5.724c.241.15.503.286.779.407C4.525 6.68 6.195 7 8 7c1.805 0 3.475-.32 4.722-.869.275-.121.537-.257.778-.407V8c0 .133-.058.318-.282.55-.227.237-.592.484-1.1.708C11.101 9.705 9.646 10 8 10c-1.647 0-3.102-.295-4.117-.742-.51-.224-.874-.47-1.101-.707C2.558 8.318 2.5 8.133 2.5 8zm0 2.225V12.5c0 .133.058.318.282.55.227.237.592.484 1.1.708 1.016.447 2.471.742 4.118.742 1.647 0 3.102-.295 4.117-.742.51-.224.874-.47 1.101-.707.224-.233.282-.418.282-.551v-2.275c-.241.15-.503.285-.778.406-1.247.549-2.917.869-4.722.869-1.805 0-3.475-.32-4.721-.869a6.236 6.236 0 01-.779-.406z"/></svg> <b>20 KiB</b></span>
				</div>
			
		</div>
	</div>
	
	<div class="ui segment sub-menu language-stats-details" style="display: none">
		<div class="ui horizontal center link list">
			
			<div class="item">
				<i class="color-icon" style="background-color: #555555"></i>
				<span class="ui"><b>
				
					C
				
				</b> 100%</span>
			</div>
			
		</div>
	</div>
	<a class="ui segment language-stats">
		
		<div class="bar" style="width: 100%; background-color: #555555">&nbsp;</div>
		
	</a>
	
</div>

		<div class="ui stackable secondary menu mobile--margin-between-items mobile--no-negative-margins">
			<div class="fitted item choose reference">
	<div class="ui floating filter dropdown custom" data-can-create-branch="false" data-no-results="Результатов не найдено.">
		<div class="ui basic small compact button" @click="menuVisible = !menuVisible" @keyup.enter="menuVisible = !menuVisible">
			<span class="text">
				<svg viewBox="0 0 16 16" class="svg octicon-git-branch" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122V6A2.5 2.5 0 0110 8.5H6a1 1 0 00-1 1v1.128a2.251 2.251 0 11-1.5 0V5.372a2.25 2.25 0 111.5 0v1.836A2.492 2.492 0 016 7h4a1 1 0 001-1v-.628A2.25 2.25 0 019.5 3.25zM4.25 12a.75.75 0 100 1.5.75.75 0 000-1.5zM3.5 3.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0z"/></svg>
				ветка:
				<strong>dev</strong>
			</span>
			<i class="dropdown icon"></i>
		</div>
		<div class="data" style="display: none" data-mode="branches">
			
				<div class="item branch selected" data-url="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c">dev</div>
			
				<div class="item branch " data-url="/quest02_10612_a-8xmt/quest02/src/branch/dev_0/ex02/my_strlen.c">dev_0</div>
			
				<div class="item branch " data-url="/quest02_10612_a-8xmt/quest02/src/branch/master/ex02/my_strlen.c">master</div>
			
			
		</div>
		<div class="menu transition" :class="{visible: menuVisible}" v-if="menuVisible" v-cloak>
			<div class="ui icon search input">
				<i class="filter icon"></i>
				<input name="search" ref="searchField" v-model="searchTerm" @keydown="keydown($event)" placeholder="Фильтр по ветке или тегу...">
			</div>
			<div class="header branch-tag-choice">
				<div class="ui grid">
					<div class="two column row">
						<a class="reference column" href="#" @click="mode = 'branches'; focusSearchField()">
							<span class="text" :class="{black: mode == 'branches'}">
								<svg viewBox="0 0 16 16" class="svg octicon-git-branch" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122V6A2.5 2.5 0 0110 8.5H6a1 1 0 00-1 1v1.128a2.251 2.251 0 11-1.5 0V5.372a2.25 2.25 0 111.5 0v1.836A2.492 2.492 0 016 7h4a1 1 0 001-1v-.628A2.25 2.25 0 019.5 3.25zM4.25 12a.75.75 0 100 1.5.75.75 0 000-1.5zM3.5 3.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0z"/></svg> Ветки
							</span>
						</a>
						<a class="reference column" href="#" @click="mode = 'tags'; focusSearchField()">
							<span class="text" :class="{black: mode == 'tags'}">
								<i class="reference tags icon"></i> Теги
							</span>
						</a>
					</div>
				</div>
			</div>
			<div class="scrolling menu" ref="scrollContainer">
				<div v-for="(item, index) in filteredItems" :key="item.name" class="item" :class="{selected: item.selected, active: active == index}" @click="selectItem(item)" :ref="'listItem' + index">${ item.name }</div>
				<div class="item" v-if="showCreateNewBranch" :class="{active: active == filteredItems.length}" :ref="'listItem' + filteredItems.length">
					<a href="#" @click="createNewBranch()">
						<div>
							<svg viewBox="0 0 16 16" class="svg octicon-git-branch" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122V6A2.5 2.5 0 0110 8.5H6a1 1 0 00-1 1v1.128a2.251 2.251 0 11-1.5 0V5.372a2.25 2.25 0 111.5 0v1.836A2.492 2.492 0 016 7h4a1 1 0 001-1v-.628A2.25 2.25 0 019.5 3.25zM4.25 12a.75.75 0 100 1.5.75.75 0 000-1.5zM3.5 3.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0z"/></svg>
							Создать ветку <strong>${ searchTerm }</strong>
						</div>
						<div class="text small">
							
								из &#39;dev&#39;
							
						</div>
					</a>
					<form ref="newBranchForm" action="/quest02_10612_a-8xmt/quest02/branches/_new/branch/dev" method="post">
						<input type="hidden" name="_csrf" value="jLA_Suj9_UM0ycRizcTi-JMJZcc6MTU5OTMwOTcyMjE5Nzc2MzMyMg">
						<input type="hidden" name="new_branch_name" v-model="searchTerm">
					</form>
				</div>
			</div>
			<div class="message" v-if="showNoResults">${ noResults }</div>
		</div>
	</div>
</div>

			
			
			
			
				<div class="fitted item"><span class="ui breadcrumb repo-path"><a class="section" href="/quest02_10612_a-8xmt/quest02/src/branch/dev" title="quest02">quest02</a><span class="divider">/</span><span class="section"><a href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02" title="ex02">ex02</a></span><span class="divider">/</span><span class="active section" title="my_strlen.c">my_strlen.c</span></span></div>
			
			<div class="right fitted item" id="file-buttons">
				<div class="ui tiny blue buttons">
					
						
						
					
					
				</div>

			</div>
			<div class="fitted item">
				
			</div>
			<div class="fitted item">

				
				
			</div>
		</div>
		
			<div class="tab-size-8 non-diff-file-content">
	<h4 class="file-header ui top attached header">
		<div class="file-header-left">
			
				<div class="file-info text grey normal mono">
					
					
						<div class="file-info-entry">
							16 строки
						</div>
					
					
						<div class="file-info-entry">
							216 B
						</div>
					
					
				</div>
			
		</div>
		
		<div class="file-header-right">
			<div class="ui right file-actions">
				<div class="ui buttons">
					<a class="ui button" href="/quest02_10612_a-8xmt/quest02/raw/branch/dev/ex02/my_strlen.c">Исходник</a>
					
						<a class="ui button" href="/quest02_10612_a-8xmt/quest02/src/commit/2e72fdc63e20518cd2d77fd1c02f7f2664f2f751/ex02/my_strlen.c">Постоянная ссылка</a>
					
					
						<a class="ui button" href="/quest02_10612_a-8xmt/quest02/blame/branch/dev/ex02/my_strlen.c">Вина</a>
					
					<a class="ui button" href="/quest02_10612_a-8xmt/quest02/commits/branch/dev/ex02/my_strlen.c">История</a>
				</div>
				
					
						<span class="btn-octicon poping up disabled" data-content="Необходимо сделать форк этого репозитория, чтобы внести или предложить изменения этого файла." data-position="bottom center" data-variation="tiny inverted"><svg viewBox="0 0 16 16" class="svg octicon-pencil" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11.013 1.427a1.75 1.75 0 012.474 0l1.086 1.086a1.75 1.75 0 010 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 01-.927-.928l.929-3.25a1.75 1.75 0 01.445-.758l8.61-8.61zm1.414 1.06a.25.25 0 00-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 000-.354l-1.086-1.086zM11.189 6.25L9.75 4.81l-6.286 6.287a.25.25 0 00-.064.108l-.558 1.953 1.953-.558a.249.249 0 00.108-.064l6.286-6.286z"/></svg></span>
					
					
						<span class="btn-octicon poping up disabled" data-content="Вам необходимо иметь права на запись, чтобы вносить или предлагать изменения этого файла." data-position="bottom center" data-variation="tiny inverted"><svg viewBox="0 0 16 16" class="svg octicon-trashcan" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M6.5 1.75a.25.25 0 01.25-.25h2.5a.25.25 0 01.25.25V3h-3V1.75zm4.5 0V3h2.25a.75.75 0 010 1.5H2.75a.75.75 0 010-1.5H5V1.75C5 .784 5.784 0 6.75 0h2.5C10.216 0 11 .784 11 1.75zM4.496 6.675a.75.75 0 10-1.492.15l.66 6.6A1.75 1.75 0 005.405 15h5.19c.9 0 1.652-.681 1.741-1.576l.66-6.6a.75.75 0 00-1.492-.149l-.66 6.6a.25.25 0 01-.249.225h-5.19a.25.25 0 01-.249-.225l-.66-6.6z"/></svg></span>
					
				
			</div>
		</div>
		
	</h4>
	<div class="ui attached table unstackable segment">
		<div class="file-view code-view">
			
				
				<table>
					<tbody>
						
						<tr>
							<td id="L1" class="lines-num">
								<span id="L1" data-line-number="1"></span>
							</td>
							<td rel="L1" class="lines-code chroma">
								<code><span class="c1">//  #include &lt;unistd.h&gt;</code>
							</td>
						</tr>
						
						<tr>
							<td id="L2" class="lines-num">
								<span id="L2" data-line-number="2"></span>
							</td>
							<td rel="L2" class="lines-code chroma">
								<code></span><span class="c1"></span><span class="c1">//  #include &lt;stdio.h&gt;</code>
							</td>
						</tr>
						
						<tr>
							<td id="L3" class="lines-num">
								<span id="L3" data-line-number="3"></span>
							</td>
							<td rel="L3" class="lines-code chroma">
								<code></span><span class="c1"></span></code>
							</td>
						</tr>
						
						<tr>
							<td id="L4" class="lines-num">
								<span id="L4" data-line-number="4"></span>
							</td>
							<td rel="L4" class="lines-code chroma">
								<code><span class="kt">int</span> <span class="nf">my_strlen</span><span class="p">(</span><span class="kt">char</span><span class="o">*</span> <span class="n">s</span><span class="p">)</span></code>
							</td>
						</tr>
						
						<tr>
							<td id="L5" class="lines-num">
								<span id="L5" data-line-number="5"></span>
							</td>
							<td rel="L5" class="lines-code chroma">
								<code><span class="p">{</span></code>
							</td>
						</tr>
						
						<tr>
							<td id="L6" class="lines-num">
								<span id="L6" data-line-number="6"></span>
							</td>
							<td rel="L6" class="lines-code chroma">
								<code>    <span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span></code>
							</td>
						</tr>
						
						<tr>
							<td id="L7" class="lines-num">
								<span id="L7" data-line-number="7"></span>
							</td>
							<td rel="L7" class="lines-code chroma">
								<code>    <span class="k">while</span> <span class="p">(</span><span class="n">s</span><span class="p">[</span><span class="o">+</span><span class="o">+</span><span class="n">i</span><span class="p">]</span> <span class="o">!</span><span class="o">=</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">\0</span><span class="sc">&#39;</span><span class="p">)</span><span class="p">;</span></code>
							</td>
						</tr>
						
						<tr>
							<td id="L8" class="lines-num">
								<span id="L8" data-line-number="8"></span>
							</td>
							<td rel="L8" class="lines-code chroma">
								<code>	<span class="k">return</span> <span class="n">i</span><span class="p">;</span></code>
							</td>
						</tr>
						
						<tr>
							<td id="L9" class="lines-num">
								<span id="L9" data-line-number="9"></span>
							</td>
							<td rel="L9" class="lines-code chroma">
								<code><span class="p">}</span></code>
							</td>
						</tr>
						
						<tr>
							<td id="L10" class="lines-num">
								<span id="L10" data-line-number="10"></span>
							</td>
							<td rel="L10" class="lines-code chroma">
								<code>
</code>
							</td>
						</tr>
						
						<tr>
							<td id="L11" class="lines-num">
								<span id="L11" data-line-number="11"></span>
							</td>
							<td rel="L11" class="lines-code chroma">
								<code><span class="c1">//  int main(){</code>
							</td>
						</tr>
						
						<tr>
							<td id="L12" class="lines-num">
								<span id="L12" data-line-number="12"></span>
							</td>
							<td rel="L12" class="lines-code chroma">
								<code></span><span class="c1"></span>  </code>
							</td>
						</tr>
						
						<tr>
							<td id="L13" class="lines-num">
								<span id="L13" data-line-number="13"></span>
							</td>
							<td rel="L13" class="lines-code chroma">
								<code><span class="c1">//    printf(&#34;%d&#34;, my_strlen(&#34;Anzor&#34;));</code>
							</td>
						</tr>
						
						<tr>
							<td id="L14" class="lines-num">
								<span id="L14" data-line-number="14"></span>
							</td>
							<td rel="L14" class="lines-code chroma">
								<code></span><span class="c1"></span>  </code>
							</td>
						</tr>
						
						<tr>
							<td id="L15" class="lines-num">
								<span id="L15" data-line-number="15"></span>
							</td>
							<td rel="L15" class="lines-code chroma">
								<code><span class="c1">//    return(0);</code>
							</td>
						</tr>
						
						<tr>
							<td id="L16" class="lines-num">
								<span id="L16" data-line-number="16"></span>
							</td>
							<td rel="L16" class="lines-code chroma">
								<code></span><span class="c1"></span><span class="c1">//  }
</span></code>
							</td>
						</tr>
						
					</tbody>
				</table>
				
			
		</div>
	</div>
</div>

<script>
function submitDeleteForm() {
    var message = prompt("delete_confirm_message\n\ndelete_commit_summary", "Delete ''");
    if (message != null) {
        $("#delete-message").val(message);
        $("#delete-file-form").submit()
    }
}
</script>

		
	</div>
</div>


	

	</div>

	

	<footer>
	<div class="ui container">
		<div class="ui left">
			Работает на Gitea Версия: 1.13.0&#43;dev-500-g3270e7a44 Страница: <strong>145ms</strong> Шаблон: <strong>111ms</strong>
		</div>
		<div class="ui right links">
			
			<div class="ui language bottom floating slide up dropdown link item">
				<i class="world icon"></i>
				<div class="text">русский</div>
				<div class="menu">
					
						<a lang="ru-RU" class="item active selected" href="#">русский</a>
					
						<a lang="en-US" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=en-US">English</a>
					
						<a lang="zh-CN" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=zh-CN">简体中文</a>
					
						<a lang="zh-HK" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=zh-HK">繁體中文（香港）</a>
					
						<a lang="zh-TW" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=zh-TW">繁體中文（台灣）</a>
					
						<a lang="de-DE" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=de-DE">Deutsch</a>
					
						<a lang="fr-FR" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=fr-FR">français</a>
					
						<a lang="nl-NL" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=nl-NL">Nederlands</a>
					
						<a lang="lv-LV" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=lv-LV">latviešu</a>
					
						<a lang="uk-UA" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=uk-UA">Українська</a>
					
						<a lang="ja-JP" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=ja-JP">日本語</a>
					
						<a lang="es-ES" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=es-ES">español</a>
					
						<a lang="pt-BR" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=pt-BR">português do Brasil</a>
					
						<a lang="pt-PT" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=pt-PT">Português de Portugal</a>
					
						<a lang="pl-PL" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=pl-PL">polski</a>
					
						<a lang="bg-BG" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=bg-BG">български</a>
					
						<a lang="it-IT" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=it-IT">italiano</a>
					
						<a lang="fi-FI" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=fi-FI">suomi</a>
					
						<a lang="tr-TR" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=tr-TR">Türkçe</a>
					
						<a lang="cs-CZ" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=cs-CZ">čeština</a>
					
						<a lang="sr-SP" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=sr-SP">српски</a>
					
						<a lang="sv-SE" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=sv-SE">svenska</a>
					
						<a lang="ko-KR" class="item " href="/quest02_10612_a-8xmt/quest02/src/branch/dev/ex02/my_strlen.c?lang=ko-KR">한국어</a>
					
				</div>
			</div>
			<a href="/js/licenses.txt">Licenses</a>
			<a href="/api/swagger">API</a>
			<a target="_blank" rel="noopener noreferrer" href="https://gitea.io">Веб-сайт</a>
			
			<span class="version">Go1.15</span>
		</div>
	</div>
</footer>






	<script src="/js/index.js?v=8a916995465ebe639301af65515a4176"></script>

</body>
</html>

